#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p_b push_back
#define pll pair<ll,ll>
#define pii pair<int,int>
#define MOD 1e9+7
#define _for(i,a,n) for(i=a;i<n;i++)
#define pi 3.14159265
#define print(i) cout<<i<<endl;
#define PTR(x) x.begin(),x.end()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define fast {ios::sync_with_stdio(0);\
        cin.tie(nullptr);}
ll a,b,n,i; 
void dihan()
{
    cin>>a>>b>>n;
    for(i=0;a<=n&b<=n;i++) (a>b)?b+=a:a+=b;	
    print(i);
}

int main(){fast int t;cin>>t;while(t--)dihan();}
