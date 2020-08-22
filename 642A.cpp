#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,k; cin>>t;

    while(t--) { cin>>n>>k;

    if(n==2) cout<<k<<endl; else if(n>2) cout<<2*k<<endl; else cout<<"0"<<endl; }
}
