#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,n,k,i; cin>>t; while(t--)
  {
      int a=0,b=0; cin>>n>>k; int x[n];

      for(auto &i:x) {cin>>i;  if(i%2) a++; else b++;}

      if(a>k) a=k; if(!(a%2)) a--;

      if(b>=k-a&a>0) cout<<"YES"<<endl;

      else cout<<"NO"<<endl;
  }
}
