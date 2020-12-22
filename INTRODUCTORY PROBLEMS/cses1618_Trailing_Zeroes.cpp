#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
ll n;cin>>n;ll i=1;
ll s=0;
while(pow(5,i)<=n)
{
    s+=n/pow(5,i);
    i++;
}
cout<<s<<endl;
}
