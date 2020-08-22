#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   long long n,i,j,a,b=0,c,s,sum,x; cin>>n;

   sum=s=n*(n+1)/2; sum/=2; if(s%2) b=1; c=2*(sum/(n+1));

   x=sum%(n+1); if(x) c++; cout<<b<<endl<<c<<endl;  if(x) cout<<x;

   for(i=1,c=0;c<sum/(n+1);i++) {if(i!=x&(n+1-i)!=x) {cout<<" "<<i<<" "<<n+1-i; c++;}}
}
