#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(void) {
	ll n,q;
	cin>>n;
	ll arr[n+1];
	for(ll i=1;i<=n;i++)cin>>arr[i];
	cin>>q;
   ll query[q],b1=0;
   double f=log2(n);
   ll l=floor(f);
   vector<vector<ll> > v(l+1);
    vector<vector<ll> > pl(l+1);
   while(b1<q)
	{
	    ll a,b;
	    cin>>a>>b;
	    double d=b-a+1;
	    ll h=(ll)log2(d);
	    v[h].push_back(a);
	    pl[h].push_back(b1);
	    
	b1++;}
   
  
   
   vector<ll > mat;
   vector<ll > ten;
   
   vector<ll > nmat;
   vector<ll > nten;
   
   for(ll i=1;i<=n;i++)
   {
       mat.push_back(arr[i]);
       ten.push_back(0);
   }
   
	    for(ll k=0;k<v[0].size();k++)
	    {
	        ll t=ten[v[0][k]-1];
	        query[pl[0][k]]=t;
	    }
   
   	for(ll p=1;p<=l;p++)
	{   ll len=pow(2,p);
	    for(ll i=1;i<=n-len+1;i++)
	    {   ll c=mat[i-1]+mat[i-1+(len/2)];
	        nmat.push_back(c%10);
	        nten.push_back(ten[i-1]+ten[i-1+(len/2)]);
	        if(c>=10)nten[i-1]++;
	    }
	    for(ll k=0;k<v[p].size();k++)
	    {
	        ll t=nten[v[p][k]-1];
	        query[pl[p][k]]=t;
	    }
	    
	    
	    nmat.swap(mat);
	    nten.swap(ten);
	    nmat.clear();
	    nten.clear();
	}
   
    
   for(ll j=0;j<q;j++)
   {
       cout<<query[j]<<endl;
   }
 
 
 
 
	
}
