#include <iostream>
#define ll long long int
#include<bits/stdc++.h>
using namespace std;
bool check(ll arr[],ll dec[],ll n,ll p)
{
    for(ll i=0;i<p;i=i+2)
    {   bool flag=false;
        for(ll j=dec[i];j<dec[i+1];j++)
        {
            if(arr[j]>arr[j+1])flag=true;
        }
        if(flag==false)return false;
    }
    return true;
}
int main (void)
{
  ll n,m,t,l,r;
  cin>>n>>m;
  ll arr[n+1],dec[2*m],p=0,b[n];
  memset(arr,0,sizeof(arr));
  for(ll i=0;i<n;i++)b[i]=-1;
  while(m--)
  {
      cin>>t>>l>>r;
      if(t==1)
      {
       for(ll i=l;i<r;i++)b[i]=0;
      }
      else
      {
          dec[p]=l;dec[p+1]=r;p=p+2;
      }
  }
  arr[1]=n;
  for(ll i=2;i<=n;i++)
  {
      arr[i]=arr[i-1]+b[i-1];
  }
  if(check(arr,dec,n,p)){
      cout<<"YES\n";
  for(ll i=1;i<=n;i++)cout<<arr[i]<<" ";
  }
  else
  cout<<"NO\n";
  
 
}
