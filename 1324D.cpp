#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p_b push_back
#define pll pair<ll,ll>
#define take(x) for(auto &i:x) cin>>i
#define out(x) for(auto i:x) cout<<i<<" "
#define pii pair<int,int>
#define print(i) cout<<i<<endl
#define u_b upper_bound
#define l_b lower_bound
#define MOD 1e9+7
#define _for(i,a,n) for(i=a;i<n;i++)
#define for_(i,a,n) for(i=a;i>n;i--)
#define pi 3.14159265
#define ptr(x) x.begin(),x.end()
#define rPTR(x) x.rbegin(),x.rend()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define fast {ios::sync_with_stdio(0);\
        cin.tie(nullptr);}
ll n,i,b,c;
void dihan()
{
    cin>>n; ll x[n],y[n],j=n;    
    take(x); take(y);
    _for(i,0,n) x[i]-=y[i]; sort(x,x+n);
    for(i=n;--i>-1&x[i]>0;){b=u_b(x,x+n,-x[i])-x,c+=i-b;}
    cout<<c;    
}
int main(){fast int t;dihan();}