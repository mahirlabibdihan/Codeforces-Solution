#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main()
{
    long long n,s=0,i;  cin>>n;

    for(i=1;i<n;i++) { if(i%2) s+=1; else s-=1; s*=3; s%=mod;}

    cout<<s;
}
