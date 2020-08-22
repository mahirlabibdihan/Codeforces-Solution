#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,s=0,i; cin>>n;

    for(i=1;i<=n;i++) s+=ceil(pow(2,i));

    cout<<s;
}
