#include<bits/stdc++.h>
using namespace std;

void dihan()
{
  int a,b,c; cin>>a>>b; c=(a-b)%2;

  if(a>b) c++; else if(b>a) c+=2;

  cout<<c<<endl;
}

int main(){int t;cin>>t;while(t--)dihan();}
