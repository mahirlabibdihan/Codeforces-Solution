#include<bits/stdc++.h>
using namespace std;

int main()
{
   int i,n,k,max=1,c=0,s=0; cin>>n>>k;  int x[n];

   for(int &i:x) cin>>i;

   for(i=0;i<n-1;i++) if(x[i]==x[i+1]){s=i-c+1; if(s>max) max=s; c=i+1;}

   s=i-c+1; if(s>max) max=s;

   cout<<max;
}

