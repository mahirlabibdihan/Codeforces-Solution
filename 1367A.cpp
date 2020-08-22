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
    string x; cin>>x;
    int n=x.length(),i;
    if(n<3) cout<<x<<endl;
    else
    {cout<<x[0];
    for(i=1;i<n-1;i+=2) cout<<x[i];
    cout<<x[n-1]<<endl;
    }

}

int main(){int t;cin>>t;while(t--)dihan();}
