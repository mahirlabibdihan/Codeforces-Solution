#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,s,x[21];  x[0]=1; x[1]=1;

  for(i=2;i<21;i++) x[i]=x[i-1]+x[i-2];

  cin>>n;   cout<<x[n];
}


