#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(void) {
	ll q,n,m;
	cin>>q;
	while(q--)
	{
	    cin>>n>>m;
	    char ch[n][m];
	    ll row[n],col[m];
	    memset(row,0,sizeof(row));
	    memset(col,0,sizeof(col));
	    for(ll i=0;i<n;i++)
	    {
	        for(ll j=0;j<m;j++)
	        {cin>>ch[i][j];
	            if(ch[i][j]=='.')
	            {
	                row[i]++;col[j]++;
	            }
	        }
	        
	    }
	    ll min=INT_MAX;
	    for(ll i=0;i<n;i++)
	    {
	        for(ll j=0;j<m;j++)
	        {
	            ll x=row[i]+col[j];
	            if(ch[i][j]=='.')
	            x--;
	            if(x<min)min=x;
	        }
	    }
	    cout<<min<<endl;
	    
	    
	    
	}
	
	
}

