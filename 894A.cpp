#include<iostream>
#include<vector>
using namespace std;

int main()
{
  string x; cin>>x; int i,j,a=0,b,c=0,n=x.length(),k;

  vector<int> y;

  for(i=0;i<n;i++)
  {
      if(x[i]=='Q')
      {
          for(j=i+1;j<n;j++)
          {
              if(x[j]=='A') a++;

              if(x[j]=='Q') { y.push_back(a); a=0;}
          }
          break;
      }
  }


b=y.size();

  for(i=0;i<b;i++)
  {
      for(j=i;j<b;j++)
        for(k=j;k<b;k++)
            c+=y[k];
  }

    cout<<c;
}
