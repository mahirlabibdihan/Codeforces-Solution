#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k,a,b,i,c=0; string x; cin>>n>>k>>x; vector<int> y(n-2);

  for(i=0;i<n;i++) {if(x[i]=='G') a=i; else if(x[i]=='T') b=i; }

  for(i=min(a,b)+k;i<max(a,b);i+=k) if(x[i]=='#') break;

  if(i==max(a,b)) cout<<"YES"; else cout<<"NO";
}
