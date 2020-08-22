#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,x[12]={4,7,47,74,444,447,474,477,744,747,774,777};

  cin>>n; for(i=0;i<12;i++) if(!(n%x[i])) break;

  if(i==12) cout<<"NO"; else cout<<"YES";
}

