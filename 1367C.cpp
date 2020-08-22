#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p_b push_back
#define pll pair<ll,ll>
#define _for(i,a,n) for(i=a;i<n;i++)
#define pi 3.14159265
#define PTR(x) x.begin(),x.end()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
void dihan()
{
    int n,i,k,l,r,m,c=0; string x;

    cin>>n>>k;  r=l=-(k+1); cin>>x;

    _for(i,0,n) if(x[i]==1) l=r,r=i,m=r-l-1,c+=(m-k)/(k+1);

    cout<<c+((n-r-1)/(k+1))<<endl;
}

int main(){int t;cin>>t;while(t--)dihan();}
