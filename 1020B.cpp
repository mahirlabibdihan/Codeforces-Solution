#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,j; cin>>n; int x[n];

    for(auto &i:x) cin>>i;

    for(j=1;j<=n;j++)
    {
      map<int,int> y;   y[j]++;

    for(i=x[j-1];;;){if(y[i])  break; else {y[i]++; i=x[i-1];  }}

    cout<<i<<" ";
    }
}
