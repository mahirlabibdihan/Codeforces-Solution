#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i; string x;

   cin>>n>>x;

   for(i=0;i<n;i++) x[i]-=48;

   for(i=0;i<n-1;i++) if((x[i]&x[i+1])|(i<n-2&!x[i]&!x[i+1]&!x[i+2])|((!i&!x[i]&!x[i+1])|(i==n-2&!x[i]&!x[i+1]))) break;

   if(i==n-1&(n>1|x[0])) cout<<"yes"; else cout<<"no";
}


