#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(void) {
ll n,m;
cin>>n;
char s[n];
//fflush(stdin);
cin>>s;

vector<vector<ll> > v(26);
for(ll i=0;i<n;i++)
{
    int c=s[i];
    c=c-97;
    v[c].push_back(i);
    
}
ll pos[26];
memset(pos,0,sizeof(pos));

cin>>m;
//fflush(stdin);
while(m--)
{   
    char ch[200000];
    cin>>ch;
    memset(pos,0,sizeof(pos));
    ll t=-1;
    for(ll i=0;i<strlen(ch);i++)
    {
        int c=ch[i];
        c=c-97;
        ll pp=v[c][pos[c]];
        pos[c]++;
        if(pp>t)t=pp;
        
    }
    cout<<t+1<<endl;
}


}
