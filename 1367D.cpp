#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p_b push_back
#define pll pair<ll,ll>
#define pii pair<int,int>
#define _for(i,a,n) for(i=a;i<n;i++)
#define pi 3.14159265
#define PTR(x) x.begin(),x.end()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
void dihan()
{
    string s; cin>>s;
    sort(PTR(s));

    int n,i,j,k,m,a; cin>>n;

    vector<pair<int,char>> y(n);

    vector<pii> x(n);

    for(i=0;i<n;i++)
    {
        cin>>x[i].first;
        x[i].second=i;
    }

    sort(PTR(x),greater<pii>());


    for(i=0;i<n;i++)
      {
          y[i].first=x[i].second;
          y[i].second=s[i];
      }

      sort(PTR(y));
    for(i=0;i<n;i++)
        cout<<y[i].second;

    cout<<endl;
}

int main(){int t;cin>>t;while(t--)dihan();}
