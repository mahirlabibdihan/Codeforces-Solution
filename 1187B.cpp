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
#define MOD 1e9+7
#define _for(i,a,n) for(i=a;i<n;i++)
#define for_(i,a,n) for(i=a;i>n;i--)
#define pi 3.14159265
#define ptr(x) x.begin(),x.end()
#define rptr(x) x.rbegin(),x.rend()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define fast {ios::sync_with_stdio(0);\
        cin.tie(nullptr);}

int n,t,s,i,j,ans; 
string x,y;
vector<pair<char,int>> z;
void dihan()
{
    ans=0;
 
    cin>>y;

    sort(ptr(y));

    for(i=0,j=0;i<y.length(),j<n;j++)
     {
            if(z[j].first==y[i])
            {
               ans=max(ans,z[j].second);

               i++;
            }
        
     }




    cout<<ans<<endl;
}

int main(){fast int t;cin>>n>>x>>t;
    
    _for(i,0,n) z.p_b({x[i],i+1});
    sort(ptr(z));
    while(t--)dihan();}



