#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,t,i;

    cin>>t;

    while(t--)

    {cin>>n>>k;

    int sum=n+2*(k-1);
s
    if(n%2) {for(i=3;;i+=2) if(!(n%i)) break; sum+=i;}

    else sum+=2;

    cout<<sum<<"\n";}
}
