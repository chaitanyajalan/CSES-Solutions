#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
int n=0;
string s;
cin>>s;

int l=s.length();
int x=1;
for(int i=0;i<l;i++)
{
    if(i==0)
        continue;
    if(s[i]==s[i-1])
        x++;
    else{
        n=max(n,x);
        x=1;
        continue;
        }

}

n=max(n,x);
cout<<n<<endl;

}
