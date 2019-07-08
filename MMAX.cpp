#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
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
	ll t,n;
	cin>>t;
    while(t--)
    {
        cin>>n;
        string k,u;
        
        getline(cin,u);
        getline(cin, k);
      
        ll x=mod(k,n);
        ll y=n-x;
        if(x==0){cout<<"0\n";continue;}
        if(x==y){cout<<(2*x) - 1<<endl;continue;}
        ll m=((x<y)?x:y);
        cout<<(2*m)<<endl;
    }
	
}
