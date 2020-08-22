#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void dihan()
{
    ll n,i,j,k,c=1; cin>>n; int x[n];

    for(auto &i:x) cin>>i;

    sort(x,x+n);

    for(i=0;i<n;i++)
    {
        if(x[i]<=i+1) c=i+2;
    }

    cout<<c<<endl;








    return;
}

int main(){int t;cin>>t;while(t--)dihan();}
