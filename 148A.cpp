#include<iostream>
#include<algorithm>
#include<numeric>

using namespace std;

int main()
{
   int a,b,c,d,n; cin>>a>>b>>c>>d>>n;

   int x[n+1]={},i;

   for(i=1;i<=n+1;i++) if(!(i%a)|!(i%b)|!(i%c)|!(i%d)) x[i]=1;

   cout<<accumulate(x,x+n+1,0);
}
