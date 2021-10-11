#include<iostream>
using namespace std;

int main()
{
  int k,n,w;  // 0<=n<=10^9  , 1<=k,w<=1000
  cin>>k>>n>>w; 
  int x=(w*(w+1)*k)/2;  

  /* 
  1.k + 2.k + ..... + i.k + .... + w.k 
  => k(1+2+.....+i+....+w) 
  => k*(w*(w+1)/2) 
  => Total cost of buying w bananas
  if this is greater than n, than soldier need to borrow .
  */

  if(n>=x) cout<<0; 
  else cout<<x-n;
}

