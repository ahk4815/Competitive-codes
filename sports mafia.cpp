#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(void) {
   ll n,k;
   cin>>n>>k;
   
   ll b=(2*n) +3;
   ll c=(n*n)+n -(2*k);
   
   ll d=(b*b) - (4*c);
   d=(ll)sqrt(d);
   ll a1=(b+d)/2;
   ll a2=(b-d)/2;
   //cout<<a1<<endl<<a2;
   cout<<((a1<=a2)?a1:a2)<<endl;
}
