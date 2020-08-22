#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p_b push_back
#define pll pair<ll,ll>
#define _for(i,a,n) for(i=a;i<n;i++)
#define pi 3.14159265
#define PTR(x) x.begin(),x.end()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define fast {ios::sync_with_stdio(0);\
        cin.tie(nullptr);}

void dihan()
{
    ll n,i,j,k,m,a,l,s=1,r,c=1; cin>>n>>k; vector<ll> x(n),y;

    for(ll &i:x) cin>>i;
    _for(i,1,n-1) if(x[i]>x[i-1]&x[i]>x[i+1])  y.push_back(i);

   if(!y.size()) cout<<1<<" "<<1<<endl;     	
   else    
   	{a=r=y.size()-1; 

   if(a) 
    {for(i=r-1;i>-1;i--) 
     {
     	if(y[r]-y[i]+3<=k) {c++; if(c>=s) a=r,s=c;}
     	else
     	{
     		while(y[r]-y[i]+3>k) r--,c--; (r>i)?i++:c++;     		
     	}
     }
    }
     
    cout<<s+1<<" ";

    if(s==1) a=0;
    y[a]-=k-3;cout<<(y[a]>0?y[a]:1)<<endl;
    }

    df
}

int main(){fast int t;cin>>t;while(t--)dihan();}