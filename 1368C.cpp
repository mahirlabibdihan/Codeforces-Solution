#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p_b push_back
#define pll pair<ll,ll>
#define pii pair<int,int>
#define print(i) cout<<i<<endl
#define MOD 1e9+7
#define _for(i,a,n) for(i=a;i<n;i++)
#define pi 3.14159265
#define PTR(x) x.begin(),x.end()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define fast {ios::sync_with_stdio(0);\
        cin.tie(nullptr);}
void dihan()
{
    int n,i; cin>>n; print(3*(n+1)+1);
    _for(i,0,n+1) printf("%d %d\n%d %d\n%d %d\n",i,i,i+1,i,i,i+1);
    printf("%d %d",i,i);
}

int main(){fast int t;dihan();}
