#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    vector<ll> v1,v2;
    ll n;

    cin>>n;
    ll x=(n+1)*n/4;
    ll sum1=0;
    if((n*(n+1))%4!=0)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;

        for(ll i=n;i>0;i--)

        {
            if((sum1+i)<=x){
                v1.push_back(i);
                sum1+=i;
            }
            else
                v2.push_back(i);
        }
    cout<<v1.size()<<endl;
    for(ll i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<"\n"<<v2.size()<<endl;
    for(ll i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    cout<<endl;
}
}
