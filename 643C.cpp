#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,s,i; cin>>t;

    while(t--) { cin>>n; s=0; for(i=n;i>1;i-=2) s+=4*(i/2)*(i-1); cout<<s<<endl;}
}
