#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k,i,a,b,j; cin>>n>>k;

  vector<vector<int>> y(n);

  for(i=0;i<ceil(pow(2,n));i++) {cin>>j; y[0].push_back(j);}

  for(i=0;i<n-1;i++)
     for(j=0;j<y[i].size();j++)
        {
            if(i%2) a=y[i][j]^y[i][++j];  else a=y[i][j]|y[i][++j];

            y[i+1].push_back(a);
        }

  while(k--)
  {
    cin>>a>>b;  a--;

    for(i=0;i<n;i++)
    {
        y[i][a]=b;

        if(a%2) a--; else a++;

        if(i%2) b^=y[i][a]; else  b|=y[i][a]; a/=2;
    }

    cout<<b<<endl;
  }
}
