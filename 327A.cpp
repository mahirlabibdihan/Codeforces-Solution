#include<bits/stdc++.h>
using namespace std;

void dihan()
{
  int n,i,j,k,a,b,c,m=0; cin>>n; int x[n];
  for(int &i:x) cin>>i;
  for(i=0,a=0;i<n;i++)if(i&x[i-1]) a++;
      for(j=i,b=0;j<n;j++)
      {if(!x[j]) b++;
          for(k=j+1,c=0;k<n;k++)if(x[k]) c++;
          m=max(m,a+b+c);
      }
  cout<<m;
}

int main(){int t;dihan();}
