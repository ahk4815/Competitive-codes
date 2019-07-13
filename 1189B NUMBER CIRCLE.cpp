#include <iostream> 
#include<bits/stdc++.h> 
#define ll long long int 
using namespace std; 
bool check(ll arr[])
{
    if((arr[0]<arr[1]+arr[2])&&(arr[1]<arr[2]+arr[0])&&(arr[2]<arr[1]+arr[0]))
    return true;
    return false;
}
int main() 
{ ll n;
cin>>n;
ll arr[n];
for(ll i=0;i<n;i++)cin>>arr[i];
sort(arr,arr+n);
 
if(n==3 && check(arr)){
    cout<<"YES\n";
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    return 0;
}
if(n==3 && !check(arr)){cout<<"NO\n";return 0;}
 
if(arr[n-1]<arr[0]+arr[n-2])
{
    cout<<"YES\n";
    for(ll i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
else
{   bool flag=false;
ll i;
    for( i=1;i<=n-3;i++)
    {
        if(arr[n-1]<arr[i]+arr[n-2])
        {
            flag=true;break;
        }
    }
    if(flag==false)
    cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(ll j=0;j<n;j++)
        {
            if(j!=i)cout<<arr[j]<<" ";
        }
        cout<<arr[i]<<endl;
    }
}
 
