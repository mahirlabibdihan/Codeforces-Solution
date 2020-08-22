#include<bits/stdc++.h>
using namespace std;

void dihan()
{
   int n,a,i=1;
   cin>>n>>a;  int x[n];
   for(;i<n;) cin>>x[i++];
   for(i=1;i<a;) i+=x[i];
   i==a?puts("YES"):puts("NO");
}

int main(){int t;dihan();}

