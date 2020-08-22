#include<bits/stdc++.h>
using namespace std;

void dihan()
{
   int n,a,i,j,y; cin>>n; short z[n+1]={},w[n]={};

   for(i=0;i<n;i++)
   {
       cin>>y; int x[y];
       for(j=0;j<y;j++) cin>>x[j];
       for(j=0;j<y;j++) if(!z[x[j]]) {z[x[j]]=1; break;}
       if(j==y) w[i]=1;
   }

   if(accumulate(w,w+n,0))
   {
      cout<<"IMPROVE"<<endl;
       for(i=0;i<n;i++) if(w[i]) {cout<<i+1<<" "; break;}
       for(i=1;i<=n;i++) if(!z[i]) {cout<<i<<endl; break;}
   }
   else cout<<"OPTIMAL"<<endl;
}

int main(){int t;cin>>t;while(t--)dihan();}
