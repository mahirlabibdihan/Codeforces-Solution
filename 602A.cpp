#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long z[2]={},n,k,i,t,a;

    for(t=0;t<2;t++) { cin>>n>>k; for(i=0;i<n;i++) {cin>>a; z[t]+=a*pow(k,n-1-i);} }

    if(z[0]==z[1]) cout<<"="; else if(z[0]>z[1]) cout<<">"; else cout<<"<";
}
