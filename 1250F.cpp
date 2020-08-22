#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n; cin>>n;

   int a=n,i;

   for(i=2;i*i<=n;i++)  if(!(n%i))  a=i;

   cout<<2*(a+(n/a));
}
