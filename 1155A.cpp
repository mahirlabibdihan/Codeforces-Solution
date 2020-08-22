#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0,j=0; string x; cin>>n>>x;

    for(i=0;i<n-1;i++) if(x[i]>x[i+1]) break;

    if(i==n-1) cout<<"NO"; else cout<<"YES"<<endl<<i+1<<" "<<i+2;
}
