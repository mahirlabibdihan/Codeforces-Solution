#include<bits/stdc++.h>
using namespace std;

pair<int,int> a[200001];

void in(int l,int r)
{
    if(l<=r)
    {
        int m=(l+r)/2;

        a[m]={l-r,m};

        in(l,m-1); in(m+1,r);
    }
}

void dihan()
{
    int n,i ; cin>>n; int x[n];

    in(0,n-1);

    sort(a,a+n);

    for(i=1;i<=n;i++) x[a[i-1].second]=i;

    for(i=0;i<n;i++) cout<<x[i]<<" "; cout<<endl;
}

int main(){int t; cin>>t;while(t--)dihan();}
