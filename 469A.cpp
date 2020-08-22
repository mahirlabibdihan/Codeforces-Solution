#include<iostream>
using namespace std;

int main()
{
  int n,p,i,a,c=2,x[101]={}; cin>>n;

  while(c--)
  {cin>>p;
  for(i=0;i<p;i++)
    { cin>>a; x[a]=1;}
  }

  for(int i:x) c+=i;

  (c==n)?cout<<"I become the guy.":cout<<"Oh, my keyboard!";
}
