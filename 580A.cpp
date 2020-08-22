#include<bits/stdc++.h>
using namespace std;

#define FOR(i,n) for(int i=0;i<int(n);i++)

int main()
{
    int n,i,j=0,m=0; cin>>n; int x[n]; FOR(i,n) cin>>x[i];

    FOR(i,n-1){if(x[i]>x[i+1]) {m=max(m,i-j+1); j=i+1;}}

    m=max(m,n-j); cout<<m;
}
