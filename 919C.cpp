#include<iostream>
using namespace std;

int main()
{
  int n,m,s,i,c=0,j,a; cin>>n>>m>>s;

  char x[n][m];

  for(auto &i:x) cin>>i;

  for(i=0;i<n;i++)
    {for(a=-1,j=0;j<m;j++)
       if(x[i][j]=='*')
         { if(j-a-1>=s) c+=j-a-s; a=j;}
    if(j-a-1>=s) c+=j-a-s;}

  if(s>1)
    {for(j=0;j<m;j++)
    {for(a=-1,i=0;i<n;i++)
     if(x[i][j]=='*')
      { if(i-a-1>=s) c+=i-a-s; a=i; }
    if(i-a-1>=s) c+=i-a-s;}}

    cout<<c;
}
