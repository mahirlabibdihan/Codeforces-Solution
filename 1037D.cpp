#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p_b push_back
#define pll pair<ll,ll>
#define _for(i,a,n) for(i=a;i<n;i++)
#define pi 3.14159265
#define PTR(x) x.begin(),x.end()
#define MAX 200001
#define INF 1e18
vector<int> eg[MAX],x(MAX),index(MAX),ans,d(MAX);
int n,i,a,b,u;

bool cmp(int b,int a){return index[a]>index[b];}
void Sort(){  _for(i,1,n+1) sort(PTR(eg[i]),cmp); }

void input(int m)
{
    while(m--)
    {
        cin>>a>>b;
        eg[a].p_b(b),eg[b].p_b(a);
    }
}

void bfs()
{
	queue<int> q; q.push(1);

    while(!q.empty())
    {
         u=q.front(); q.pop(); 
         ans.p_b(u); d[u]=1;

    _for(i,0,eg[u].size())  if(!d[eg[u][i]]) q.push(eg[u][i]);
    }
}

void dihan()
{
    cin>>n;  input(n-1);
   
   _for(i,0,n) {cin>>x[i];  index[x[i]]=i;}
   Sort();bfs();

   _for(i,0,n) if(x[i]!=ans[i]) break;
   i<n?cout<<"NO":cout<<"YES";
}

int main(){dihan();}