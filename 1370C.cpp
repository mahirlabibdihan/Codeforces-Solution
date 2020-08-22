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
#define MAX 1000000001
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define fast {ios::sync_with_stdio(0);\
        cin.tie(nullptr);}
int n,i,j,k,a,b,c;


void dihan()
{
    cin>>n; 
    
    if(n==1) puts("FastestFinger");
    else if(n%2|n==2) puts("Ashishgup");
    else if((n/2)%2) puts("FastestFinger");

    else if(!(n&n-1)) puts("FastestFinger");

else
    {for(i=0;ceil(pow(2,i))<=n;i++)
    {a=ceil(pow(2,i));
        if(!(n%a)) 
        {
        	b=(n/a)%2; 

            if(b&(n/a)>1){c=1; break;}
        }
    }

if(c) puts("Ashishgup");
else puts("FastestFinger");
}




}

int main(){fast int t;cin>>t;while(t--)dihan();}




















