#include<iostream>
using namespace std;

int main()
{
  int n,k,s=0; cin>>n>>k;
  while(n) {if(n>=k) {s+=k; n=n-k+1;} else {s+=n; n=0;}}
  cout<<s;
}
