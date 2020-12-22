#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        ll n=max(x,y)-1;

        ll sum=n*n;
        if(x>y)
        {
            if(x%2==0)
                sum=sum+2*x-1-y+1;
            else
                sum+=y;
        }
        else
        {
            if(y%2==0)
            {
                sum+=x;
            }
            else
                sum+=2*y-1-x+1;
        }
        cout<<sum<<endl;


    }



}
