#include<bits/stdc++.h>
using namespace std;

long long s=0;

int main()
{
   int n,m,a,i,c=0; cin>>n>>m; int x[n];

   for(int &i:x){cin>>a>>i; i-=a; s+=a;}

   sort(x,x+n);

   for(i=0;i<n&s>m;c++) s+=x[i++];

   if(s<=m) cout<<c; else cout<<"-1";
}
