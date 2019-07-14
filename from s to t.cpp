#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isSubSequence(char str1[], char str2[], int m, int n) 
{ 
   int j = 0; // For index of str1 (or subsequence 
  
   // Traverse str2 and str1, and compare current character  
   // of str2 with first unmatched char of str1, if matched  
   // then move ahead in str1 
   for (int i=0; i<n&&j<m; i++) 
       if (str1[j] == str2[i]) 
         j++; 
  
   // If all characters of str1 were found in str2 
   return (j==m); 
} 
int main(void) {
	ll q;
	cin>>q;
	while(q--)
	{
	    char s[101],t[101],p[101];
	    cin>>s;
	    cin>>t;
	    cin>>p;
	    if(!isSubSequence(s,t,strlen(s),strlen(t))){cout<<"NO\n";continue;}
	    ll freq_t[26],freq_p[26];
	    memset(freq_t,0,sizeof(freq_t));
	    memset(freq_p,0,sizeof(freq_p));
	    
	    for(ll i=0;i<strlen(t);i++)
	    {
	       int v=t[i];
	       v=v-97;
	       freq_t[v]++;
	    }
	    int y=0;
	    for(ll i=0;i<strlen(s);i++)
	    {
	        int v=s[i];
	        v=v-97;
	        freq_t[v]--;//check if lesser than 0 no
	        if(freq_t[v]<0){y=1;break;}
	    }
	    if(y==1)
	    {
	        cout<<"NO\n";continue;
	    }
	    for(ll i=0;i<strlen(p);i++)
	    {
	       int v=p[i];
	       v=v-97;
	       freq_p[v]++;
	    }
	    int z=0;
	    for(ll i=0;i<26;i++)
	    {
	        if(freq_p[i]>=freq_t[i])
	        continue;
	        else
	        {
	            cout<<"NO\n";z=1;break;
	        }
	    }
	    if(z==0)
	    cout<<"YES\n";
	    
	    
	    
	}
}
