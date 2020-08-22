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
#define fuck takla
#define fi first
#define se second
#define MAX 100001
#define ll long long
#define pb push_back
#define pi 3.14159265
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vi>
#define MOD 1000000007
#define pll pair<ll,ll>
#define mii map<int,int>
#define mci map<char,int>
#define pii pair<int,int>
#define gcd(a,b) __gcd(a,b)
#define print(a) cout<<a<<"\n"
#define pqi priority_queue<int>
#define umci unordered_map<char,int>
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

vll x(MAX),cnt(MAX),dp(MAX);
int t,n,i,j,k,a,b,c;

void dihan()
{
  cin>>n; take(x); 

  _for(i,0,n) cnt[x[i]]++; dp[0]=0; dp[1]=cnt[1]*1;

  _for(i,2,MAX) dp[i]=max(dp[i-1],dp[i-2]+cnt[i]*i);
   
  cout<<dp[MAX-1];  
}

int main(){fast dihan();}