#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
ll a;
cin>>a;

for(ll n=1;n<=a;n++){
ll x= (((n*n)*(n*n-1))-8-24-(4*4*(n-3))-(6*4*(n-4))-8*(n-4)*(n-4))/2;

cout<<x<<endl;}
}
