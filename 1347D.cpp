
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p_b push_back
#define pll pair<ll,ll>
#define f first
#define s second
#define FOR(i,n) for(i=0;i<n;i++)
#define pi 3.14159265
#define PTR(x) x.begin(),x.end()
#define MAX 100001

vector<int> eg[MAX],edge[MAX];

int n,i,a,b;

class graph
{public:



    graph()
    {
        input();
        Sort();
    }

void input()
{int m=n-1;

    eg[0].push_back(1);
    while(m--)
    {
        
        cin>>a>>b;

        eg[a].push_back(b);
        eg[b].push_back(a);
    }
}

void Sort()
{
	for(i=1;i<=n;i++)
	{
       sort(PTR(eg[i]));
	}
}





};

void dihan()o
{
	int l=0,r=eg[l].size(),u;
    cin>>n; 
    graph x;
    vector<int> s(n),t;

   for(int &i:s) cin>>i; 

   while(r<n)
   {u=eg[l].size();
   	 t.assign(s.begin()+r-1,s.begin()+r-1+u);
   	 sort(PTR[t]);

   	 FOR(i,t.size())
   	 	if(t[i]!=eg[l][i]) break;



   }


  



}

int main(){int t;dihan();}
