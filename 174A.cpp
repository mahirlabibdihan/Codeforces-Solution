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
#define INF 1e18
#define fi first
#define se second
#define flt float
#define bg begin()
#define str string
#define eif else if
#define si set<int>
#define sll set<ll>
#define dbl  double
#define two(n) 1<<n
#define m_s multiset
#define m_m multimap
#define ll long long
#define pb push_back
#define pf push_front
#define mt make_tuple
#define pi 3.14159265
#define spii set<pii>
#define mll map<ll,ll>
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vi>
#define MOD 1000000007
#define p_b pop_back()
#define ___ cout<<endl
#define bc(x) x.back()
#define fr(x) x.front()
#define p_f pop_front()
#define u_b upper_bound
#define l_b lower_bound
#define vc vector<char>
#define pll pair<ll,ll>
#define ui unsigned int
#define vb vector<bool>
#define clr(x) x.clear()
#define vull vector<ull>
#define bit(a) bitset<a>
#define vpii vector<pii>
#define vpll vector<pll>
#define vull vector<ull>
#define mii map<int,int>
#define mii map<int,int>
#define mci map<char,int>
#define pii pair<int,int>
#define mci map<char,int>
#define vd vector<double>
#define vs vector<string>
#define msi multiset<int>
#define msll multiset<ll>
#define u_s unordered_set
#define u_m unordered_map
#define ti(x,i) get<i>(x)
#define b_s binary_search
#define sz(x) (ll)x.size()
#define p_q priority_queue
#define vtiii vector<tiii>
#define max_of max_element
#define min_of min_element
#define gcd(a,b) __gcd(a,b)
#define out(a) cout<<a<<endl
#define len(x) (ll)x.length()
#define lcm(a,b) a*b/gcd(a,b)
#define rev(x) reverse(ptr(x))
#define read(x) for(auto &i:x)
#define visit(x) for(auto i:x)
#define usi unordered_set<int>
#define ull unsigned long long
#define pqi priority_queue<int>
#define tiii tuple<int,int,int>
#define pqll priority_queue<ll>
#define vvll vector<vector<ll>>
#define ptr(x) x.begin(),x.end()
#define vvc vector<vector<char>>
#define mx(a,b,c) max(a,max(b,c))
#define mn(a,b,c) min(a,min(b,c))
#define srtd(x) is_sorted(ptr(x))
#define f(i,a,n) for(i=a;i<n;i++)
#define rf(i,a,n) for(i=a;i>n;i--)
#define str_in(x) string x; cin>>x
#define rptr(x) x.rbegin(),x.rend()
#define umii unordered_map<int,int>
#define umci unordered_map<char,int>
#define maxof(x)  max_element(ptr(x))
#define minof(x)  min_element(ptr(x))
#define srt(x) sort(x.begin(),x.end())
#define bs(x,a) binary_search(ptr(x),a)
#define out2(a,b) cout<<a<<" "<<b<<endl
#define _fill(x,a) memset(x,a,sizeof(a))
#define rsrt(x) sort(x.rbegin(),x.rend())
#define adjdif(x) rf(i,n-1,0) x[i]-=x[i-1]
#define vs_in(x,n) vs x(n); read(x) cin>>i
#define vs_out(x,n) visit(x) cout<<i<<endl
#define delete(x,a) x.erase(find(ptr(x),a))
#define pre_sum(x) f(i,1,x.size()) x[i]+=x[i-1]
#define ub(x,a) upper_bound(ptr(x),a)-x.begin()
#define lb(x,a) lower_bound(ptr(x),a)-x.begin()
#define rotate_l(x,a)  rotate(x.bg,x.bg+a,x.ed)
#define v_in(x,n) vll x(n);for(auto &i:x) cin>>i
#define out3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define rotate_r(x,a) rotate(x.bg,x.bg+x.sz-a,x.ed)
#define inrange(i,a,b) ((i>=min(a,b))&(i<=max(a,b))) 
#define m_out(x) visit(x) cout<<i.fi<<" "<<i.se<<endl
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define invr(n) ull a; while(n){a=a*10+n%10;n/=10;} n=a
#define v_out(x) for(auto i:x) cout<<i<<" "; cout<<endl
#define ____ ios::sync_with_stdio(0);  cin.tie(nullptr);
#define v_in2(x,y,n) vll x(n),y(n); f(i,0,n) cin>>x[i]>>y[i]
#define vp_in(x,n) vpll x(n); for(auto &i:x) cin>>i.fi>>i.se
#define s_in(x,n) sll x; for(i=0,int a;i<n,cin>>a;i++) x.insert(a)
#define m_in(x,n) mll x; for(i=0,int a,b;i<n,cin>>a>>b;i++) x[a]=b
#define v2_in(x,n,m) vvll x(n,vll(m)); f(i,0,n) for(auto &j:x[i]) cin>>j
#define v2_out(x) f(i,0,x.sz) {for(auto j:x[i]) cout<<j<<" "; cout<<endl;}

int t,n;
#define MAX 100001

void dihan()
{
    cin>>n;
    out((n<30?"No":"Yes"));
}
int main(){____ {dihan();}}





