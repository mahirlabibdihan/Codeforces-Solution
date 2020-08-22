#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k,s,i; cin>>n>>k;

  string x[n],y; vector<int> z(n);

  auto u=z.begin(),v=z.end();

  for(i=0;i<n;i++) {cin>>x[i]; z[i]=x[i].length();}

  sort(u,v); cin>>y; s=y.length();

  int b=upper_bound(u,v,s)-u,c=lower_bound(u,v,s)-u;

  int p=((c+1)%k)?(c+1)/k:c/k,q=(b%k)?b/k:(b-1)/k;

  cout<<5*p+c+1<<" "<<5*q+b;
}
