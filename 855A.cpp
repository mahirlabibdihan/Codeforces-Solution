#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,j;

  cin>>n;

  char x[n][101];

  for(i=0;i<n;i++)
    cin>>x[i];

  for(i=0;i<n;i++)
  {
      for(j=0;j<i;j++) if(!strcmp(x[i],x[j])) {cout<<"YES"<<endl; break;}

      if(j==i) cout<<"NO"<<endl;
  }
}
