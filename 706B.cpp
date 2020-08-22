/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|

*/


#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
#define ll long long
#define pb push_back
#define pi 3.14159265
#define MOD 1000000007
#define pll pair<ll,ll>
#define pii pair<int,int>
#define print(i) cout<<i<<endl
#define digit(a) floor(log10(a))+1
#define _for(i,a,n) for(i=a;i<n;i++)
#define for_(i,a,n) for(i=a;i>n;i--)
#define ptr(x) x.begin(),x.begin()+n
#define rptr(x) x.rbegin(),x.rend()+n
#define take(x) _for(i,0,n) cin>>x[i]
#define _sort(x) sort(x.begin(),x.begin()+n)
#define ub(x,a) upper_bound(ptr(x),a)-x.begin()
#define lb(x,a) lower_bound(ptr(x),a)-x.begin()
#define bs(x,a) binary_search(ptr(x),a)-x.begin()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define prefix_sum(x) _for(i,1,x.size()) x[i]+=x[i-1]
#define out(x) _for(i,0,n) cout<<x[i]<<" "; cout<<endl
#define fast ios::sync_with_stdio(0); cin.tie(nullptr);

vector<int> x(MAX+1);
int t,n,i,j,k,a,b,c;

void solve()
{
    cin>>n; 

    take(x); _sort(x);
}

void dihan()
{
    cin>>a;

    print(ub(x,a));
}

int main(){fast solve();cin>>t;while(t--)dihan();}

     