#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,j,s=0; cin>>n; int x[n];

  for(auto &i:x) cin>>i;

  for(i=0;i<n-1;i++)
  {
    for(j=0;i+ceil(pow(2,j))<n;j++);

    j=i+ceil(pow(2,j-1));

    x[j]+=x[i];  s+=x[i];

    cout<<s<<endl;
  }
}
