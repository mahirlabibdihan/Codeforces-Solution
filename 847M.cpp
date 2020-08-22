#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i; cin>>n; int x[n],y[n];

  for(int &i:x) cin>>i;

  adjacent_difference(x,x+n,y);

  for(i=1;i<n-1;i++) if(y[i]!=y[i+1]) break;

  if(i==n-1) cout<<x[n-1]+y[1];

  else cout<<x[n-1];
}
