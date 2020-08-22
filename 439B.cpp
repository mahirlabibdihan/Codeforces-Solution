#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,i,j,s=0; cin>>n>>k; int x[n];

    for(i=0;i<n;i++) cin>>x[i]; sort(x,x+n);

    for(i=0,j=k;i<n;i++) {s+=x[i]*k; if(k>1) k--;}

    cout<<s;
}
