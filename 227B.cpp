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
#define ll long long
#define p_b push_back
#define pll pair<ll,ll>
#define take(x) for(auto &i:x) cin>>i
#define out(x) for(auto i:x) cout<<i<<" "
#define pii pair<int,int>
#define print(i) cout<<i<<endl
#define u_b upper_bound
#define l_b lower_bound
#define MOD 1000000007
#define MAX 100001
#define _for(i,a,n) for(i=a;i<n;i++)
#define for_(i,a,n) for(i=a;i>n;i--)
#define pi 3.14159265
#define ptr(x) x.begin(),x.end()
#define rptr(x) x.rbegin(),x.rend()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define fast {ios::sync_with_stdio(0);\
        cin.tie(nullptr);}

int t,n,i,j,a;
ll vasya,petya;
int index[MAX],x[MAX];

void solve()
{
	 cin>>n;
	 _for(i,0,n) {cin>>x[i]; index[x[i]]=i;}
}

void dihan()
{
    cin>>a;
    vasya+=index[a]+1;
    petya+=n-index[a];
}

int main()
{fast
 solve();

 cin>>t; 
 while(t--)dihan();

 cout<<vasya<<" "<<petya;
}
