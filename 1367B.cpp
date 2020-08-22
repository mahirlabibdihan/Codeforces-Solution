#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p_b push_back
#define pll pair<ll,ll>
#define _for(i,a,n) for(i=a;i<n;i++)
#define pi 3.14159265
#define PTR(x) x.begin(),x.end()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
void dihan()
{
    int n,i,j,k,m,a=0,b=0; cin>>n; int x[n];
    for(i=0;i<n;i++)
        {cin>>x[i];

    if(i%2&!(x[i]%2)) a++;
    else if(!(i%2)&(x[i]%2)) b++;}

    if(a==b) cout<<a<<endl;

    else cout<<-1<<endl;




}

int main(){int t;cin>>t;while(t--)dihan();}
