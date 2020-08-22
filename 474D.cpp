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
#define pll pair<ll,ll>                                                                                                                                     #define take(x) for(auto &i:x) cin>>i
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
#define MAX 100002
#define FOR(i,x) for(auto i=x.begin();i!=x.end();i++)
#define fast {ios::sync_with_stdio(0);\
        cin.tie(nullptr);}

int a,b,i,j,c,k,h,n;


vector<int> x(MAX); 

void input()
{x[0]=1;
     for(i=1;i<MAX;i++)
     {
 0132         c=(i/n)%MOD;
2
          x[i]%=MOD;
 
         x[i]=((x[i]+x[i-1])%MOD+MOD)%MOD;

         x[i]=((x[i]+c)%MOD+MOD)%MOD;

    }

x[0]=0;
     for(i=1;i<MAX;i++)
     {
       x[i]=(((x[i]+x[i-1])%MOD+MOD)%MOD);


    
    }
}
 
void dihan()
{
 
 
       cin>>a>>b;

        print((((x[b]-x[a-1])%MOD)+MOD)%MOD);
       
}
 
int main(){fast int t;cin>>t>>n;input();while(t--)dihan();}

