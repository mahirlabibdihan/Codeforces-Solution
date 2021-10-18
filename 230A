#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int s,n;
  int x[1000],y[1000];
  cin>>s>>n;
  int i,j;
  for(i=0;i<n;i++)
  {
    cin>>x[i]>>y[i];
  }  

  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(x[j]>x[j+1])
      {
        swap(x[j],x[j+1]);
        swap(y[j],y[j+1]);
      }
    }
  }
  
  for(int i=0;i<n;i++)
  {
    if(s>x[i])
    {
      s+=y[i];
    }
    else
    {
      cout<<"NO";
      return 0;
    }
  }  
  cout<<"YES";
  return 0;
}
