#include<iostream>
#include <vector>
#include<map>

using namespace std;
map<int,int> color;
map<int,bool> visited;
map<int,vector<int>> adj;
int c1,c2;
void coloring(int i)
{
	visited[i]=true;
	for(int a:adj[i])
	{
		if(!visited[a])
		{
			if(color[i]==1)
			{
				color[a]=2;
				c2++;
			}
			else
			{
				color[a]=1;
				c1++;
			}
			coloring(a);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	color[1]=1;
	c1++;
	coloring(1);
	//cout<<c1<<" "<<c2<<endl;
	long long result=0;
	for(int i=1;i<=n;i++)
	{
		if(color[i]==1)
		{
			//cout<<i<<endl;
			result+=c2-adj[i].size();
		}
	}
	cout<<result<<endl;
}