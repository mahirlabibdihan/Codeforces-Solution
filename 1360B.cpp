#include<bits/stdc++.h>
using namespace std;

void dihan()
{
   int n,i,min=INT_MAX; cin>>n; int x[n];

   for(auto &i:x) cin>>i;  sort(x,x+n);

   for(i=1;i<n;i++)
    {if(x[i]-x[i-1]<min) min=x[i]-x[i-1];}

   cout<<min<<endl;

   return;
}

int main(){int t; cin>>t; while(t--) dihan();}
