#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
//#define 998244353 998244353
using namespace std;
ll nod(ll x)
{
    ll d=0;
    while(x>0)
    {
        d++;
        x/=10;
    }
    return d;
}
ll mod(string num, ll a) 
{ 
    // Initialize result 
    ll res = 0; 
  
    // One by one process all digits of 'num' 
    for (ll i = 0; i < num.length(); i++) 
         res = (res*10 + (ll)num[i] - '0') %a; 
  
    return res; 
}
int main(void) {
   
   ll n;
   cin>>n;
   ll arr[n];
   for(ll i=0;i<n;i++)cin>>arr[i];
   ll d=nod(arr[0]);
   ll digit[d];
   memset(digit,0,sizeof(digit));
   ll p=0;
   for(ll i=0;i<n;i++)
   {
       ll copy=arr[i];
       p=0;
       while(copy>0)
       {
           ll x=copy%10;
           digit[p]+=x;
           copy/=10;
           p++;
       }
   }
 // cout<<digit[0]<<"---"<<d<<endl;
   ll ans=0;
   
   for(ll i=0;i<n;i++)
   {
       ll copy=arr[i];
       p=0;
       //vector<ll> v;
       string v;
       ll carry=0;ll g;
       while(copy>0)
       {
           ll x=copy%10;
           ll t=(n*x) +carry;
           g=(t)%10;
           v.push_back(g+48);//here
           carry=t/10;
           carry+=digit[p];
           g=carry%10;
           v.push_back(g+48);//here
           carry/=10;
           
           copy/=10;
           p++;
       }
       g=carry;
       while(g>0){
           ll k=g%10;
       v.push_back(k+48);
       g/=10;
       }//here
       ll par=0;
       reverse(v.begin(),v.end());
      /* for(ll j=0;j<v.size();j++)
       {
           par+=((v[j]*((ll)pow(10,j))));
           par=par%998244353;
       }
       */
     // if(i==0)
     // cout<<v<<"+++"<<endl;
       par=mod(v,998244353);
      // cout<<"---"<<par<<endl;
       ans+=(par);
       ans=ans%998244353;
   }
   ans=ans%998244353;
   cout<<ans<<endl;
   
    
    
}
