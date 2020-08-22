#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p_b push_back
#define pll pair<ll,ll>
#define pii pair<int,int>
#define MOD 1e9+7
#define MAX 10000000
#define _for(i,a,n) for(i=a;i<n;i++)
#define pi 3.14159265
#define print(i) cout<<i<<endl;
#define PTR(x) x.begin(),x.end()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define fast {ios::sync_with_stdio(0);\
        cin.tie(nullptr);}

int i,j;
void dihan()
{
    double n,a=9,b,c; cin>>n;  string s="codeforces";
    for(;ceil(pow(j,10))<n;j++);

_for(i,0,10)
   {
    	c=j; n/=j;
    	b=ceil(pow(n,1/a--)); if(b<j) j=b; 
        while(c--) cout<<s[i];
   }   
}

int main(){fast int t;dihan();}
