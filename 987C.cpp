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
#define MAX (3*1e8)+1
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
void dihan()
{
    int n; cin>>n; ll x[n],y[n],ans=MAX,a=0,c=n-1,b=0,i,j,k;  
    take(x); take(y);

for(a=0;c=n-1,a+1<c;a++)
    {
    	for(c=n-1;a+1<c;c--)
       {
     	   for(i=a+1,b=0;i<c;i++)
    	  {
    		  if(x[i]>x[a]&x[i]<x[c])
    		 {
                 if(!b) {b=i; ans=min(ans,y[a]+y[b]+y[c]);}
                 else if(y[i]<y[b]) {b=i; ans=min(ans,y[a]+y[b]+y[c]);}
    		 }

    	  }     

       }

    }


     if(ans==MAX) ans=-1;
     print(ans);

}

int main(){fast int t;dihan();}
