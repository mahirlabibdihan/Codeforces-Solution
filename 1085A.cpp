#include<bits/stdc++.h>
using namespace std;

int main()
{
  string x; cin>>x;

  int n=x.length(),i=0,j,a=ceil(n/2.0)-1,c=0;

  for(;c<n;c++)
  {
      if(c%2) cout<<x[a+i]; else cout<<x[a-i++];
  }
}


