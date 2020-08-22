#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
  int n,i,m=0; string x,y; unordered_map<string,int> z;
  cin>>n>>x;

  for(i=0;i<n-1;i++)
  {

     if(++z[x.substr(i,2)]>m)
     {
         m=z[x.substr(i,2)];
         y=x.substr(i,2);
     }
  }
  cout<<y;
}
