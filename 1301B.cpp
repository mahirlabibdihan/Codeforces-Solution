#include<bits/stdc++.h>
using namespace std;

void dihan()
{
   set<int>a; int n,i,max=0,c=0,j,k=0; cin>>n; vector<int> x(n+2);

   for(i=1;i<=n;i++) cin>>x[i];

   for(i=2;i<=n;i++) if(x[i]>-1&x[i-1]>-1) { c=abs(x[i]-x[i-1]); if(c>max) max=c;}

   for(i=1;i<=n;i++) if((x[i]>-1)&(x[i-1]==-1|x[i+1]==-1))  a.insert(x[i]);

   if(a.size())
   {
     c=(*a.begin()+*a.rbegin())/2; k=*a.rbegin()-c;

     if(max>k); else max=k;
   }

   cout<<max<<" "<<c<<endl; return;
}

int main(){int t; cin>>t; while(t--) dihan();}
