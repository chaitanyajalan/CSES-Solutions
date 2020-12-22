#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
int n;
//while(1){
cin>>n;

if(n==1)
    cout<<1<<endl;
else if(n==2||n==3)
    cout<<"NO SOLUTION"<<endl;
else if(n==4)
    cout<<"3 1 4 2"<<endl;
else
{
    int m=n/2;
    if(n%2!=0)
        m++;
    for(int i=1;i<=n/2;i++)
    {

        cout<<i<<" "<<i+m<<" ";
    }
    if(n%2!=0)
        cout<<n/2+1;
    cout<<endl;
}
}
