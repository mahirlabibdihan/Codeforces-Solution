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
#define end(x) x.end()
#define bg(x) x.begin()
#define pll pair<ll,ll>
#define u_b upper_bound
#define l_b lower_bound
#define mii map<int,int>
#define mii map<int,int>
#define mci map<char,int>
#define pii pair<int,int>
#define mci map<char,int>
#define pii pair<int,int>
#define vd vector<double>
#define b_s binary_search
#define max_of max_element
#define gcd(a,b) __gcd(a,b)
#define print(a) cout<<a<<"\n"
#define usi unordered_set<int>
#define pqi priority_queue<int>
#define umci unordered_map<char,int>
#define adjdif(x) for_(i,n-1,0) x[i]-=x[i-1]
#define _for(i,a,n) for(i=a;i<n;i++)
#define for_(i,a,n) for(i=a;i>n;i--)
#define ptr(x) x.begin(),x.begin()+n
#define rptr(x) x.rbegin(),x.rend()+n
#define take(x) _for(i,0,n) cin>>x[i]
#define maxof(x)  max_element(ptr(x));
#define srt(x) sort(x.begin(),x.begin()+n)
#define ub(x,a) upper_bound(ptr(x),a)-x.begin()
#define lb(x,a) lower_bound(ptr(x),a)-x.begin()
#define bs(x,a) binary_search(ptr(x),a)-x.begin()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define prefix_sum(x) _for(i,1,MAX) x[i]+=x[i-1]
#define out(x) _for(i,0,n) cout<<x[i]<<" "; cout<<endl
#define fast ios::sync_with_stdio(0); cin.tie(nullptr);

vi x{2,3,5,2,3,5},y(6),a(2);
int t,n,i,j,k,c;

void dihan()
{
    for(cin>>a[0]>>a[1];j<2;j++)while(i<3*(j+1))(a[j]%x[i])?i++:(a[j]/=x[i],y[i]++);
    _for(i,0,3) c+=abs(y[i]-y[3+i]);
    cout<<((a[0]!=a[1])?(-1):c);   

}

int main(){fast  dihan();}
