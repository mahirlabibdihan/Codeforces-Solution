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
#define MOD 1000000007
#define _for(i,a,n) for(i=a;i<n;i++)
#define for_(i,a,n) for(i=a;i>n;i--)
#define pi 3.14159265
#define ptr(x) x.begin(),x.end()
#define rptr(x) x.rbegin(),x.rend()
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define fast {ios::sync_with_stdio(0);\
        cin.tie(nullptr);}
int n,i,j,k,a,b;
void dihan()
{
    cin>>n; vector<int> x(2*n),odd,even; take(x);
    
    _for(i,0,2*n) (x[i]%2)?odd.p_b(i+1):even.p_b(i+1);
 
    a=odd.size(); b=even.size();

    (a%2)?(a--,b--):(a>=2)?a-=2:b-=2;

    _for(i,0,a) (i%2)?print(odd[i]):cout<<odd[i]<<" ";
    _for(i,0,b) (i%2)?print(even[i]):cout<<even[i]<<" ";

}

int main(){fast int t;cin>>t;while(t--)dihan();}





















