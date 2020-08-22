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
#define ed end()
#define fi first
#define se second
#define sz size()
#define MAX 200001
#define INF 1e18
#define bg begin()
#define si set<int>
#define sll set<ll>
#define ll long long
#define pb push_back
#define pf push_front
#define pi 3.14159265
#define spii set<pii>
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vi>
#define MOD 1000000007
#define p_b pop_back()
#define p_f pop_front()
#define u_b upper_bound
#define l_b lower_bound
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define mii map<int,int>
#define mii map<int,int>
#define mci map<char,int>
#define pii pair<int,int>
#define mci map<char,int>
#define vd vector<double>
#define u_s unordered_set
#define u_m unordered_map
#define b_s binary_search
#define max_of max_element
#define vtiii vector<tiii>
#define gcd(a,b) __gcd(a,b)
#define pstv(x) if(x<0) x=0
#define ngtv(x) if(x>0) x=0
#define read(x) for(auto &i:x)
#define visit(x) for(auto i:x)
#define usi unordered_set<int>
#define ull unsigned long long
#define print(a) cout<<a<<"\n"
#define printn(a) cout<<a<<endl
#define pqi priority_queue<int>
#define tiii tuple<int,int,int>
#define ptr(x) x.begin(),x.end()
#define rptr(x) x.rbegin(),x.rend()
#define maxx(a,b,c) max(a,max(b,c))
#define minn(a,b,c) min(a,min(b,c))
#define umii unordered_map<int,int>
#define umci unordered_map<char,int>
#define _for(i,a,n) for(i=a;i<n;i++)
#define for_(i,a,n) for(i=a;i>n;i--)
#define take(x) _for(i,0,n) cin>>x[i]
#define maxof(x)  max_element(ptr(x));
#define srt(x) sort(x.begin(),x.begin()+n)
#define adjdif(x) for_(i,n-1,0) x[i]-=x[i-1]
#define take2(x,y) _for(i,0,n) cin>>x[i]>>y[i]
#define ub(x,a) upper_bound(ptr(x),a)-x.begin()
#define lb(x,a) lower_bound(ptr(x),a)-x.begin()
#define rotate_l(x,a)  rotate(x.bg,x.bg+a,y.ed)
#define prefix_sum(x) _for(i,1,MAX) x[i]+=x[i-1]
#define bs(x,a) binary_search(ptr(x),a)-x.begin()
#define rotate_r(x,a) rotate(x.bg,x.bg+x.sz-a,y.ed)
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define out(x) _for(i,0,n) cout<<x[i]<<" "; cout<<"\n"
#define outn(x) _for(i,0,n) cout<<x[i]<<" "; cout<<endl
#define ____ ios::sync_with_stdio(0);  cin.tie(nullptr);

ll t,n,i;
void dihan()
{
	ll ans=INF,sum=0; cin>>n; vll x(n),y(n); 
	take2(x,y);  rotate_r(y,1);     
    _for(i,0,n) y[i]=(x[i]>y[i])?x[i]-y[i]:0,sum+=y[i],ans=min(ans,x[i]-y[i]);
    print(sum+ans);
}

int main(){____ cin>>t;while(t--)dihan();}
