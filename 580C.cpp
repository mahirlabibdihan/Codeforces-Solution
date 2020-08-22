#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
#define ll long long
#define p_b push_back
#define pll pair<ll,ll>
#define _for(i,a,n) for(i=a;i<n;i++)
#define pi 3.14159265
#define PTR(x) x.begin(),x.end()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define fast {ios::sync_with_stdio(0);\
        cin.tie(nullptr);}

int n,i,j,k,m,a,b,s=0;
vector<int> adj[MAX],cat(MAX);

void input(int m)
{
    while(m--)
    {
        cin>>a>>b;
        adj[a].p_b(b);adj[b].p_b(a);
    }
}


void dfs(int prev,int current,int c)
{
	c=(cat[current])?c+1:c=0;
	
	if(c<=k)
		{if(adj[current].size()==1&current>1) s++;
		for(auto i:adj[current]) if(i!=prev) dfs(current,i,c);}	
}

void dihan()
{
     cin>>n>>k;
     _for(i,1,n+1) cin>>cat[i];
     input(n-1);
     dfs(0,1,0);

     cout<<s;
}

int main(){fast int t;dihan();}