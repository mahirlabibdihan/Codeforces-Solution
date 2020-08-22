#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
  int n,m=0,s=0,p=0,c,d,i,j,a,b; cin>>n; vector<int> x(n);

  map<int,int> y; vector<int> z;

  for(int &i:x) {cin>>i; m=max(m,i);}

  for(i=0;i<x.size()-p;i++)
  {s=1; b=z.size();z.push_back(x[i]); a=x[i];
     c=x[i]; x.erase(x.begin()+i);i--;
     if(!y[c]&m-c+1>p)
     {c++;
         for(j=i+1;j<x.size();j++)
         {
             if(x[j]==c) {c++; s++;}

             z.push_back(x[j]);

             x.erase(x.begin()+j);j--;


         }

         if(s>p) {p=s; d=a;}
         y[a]=b;
     }
  }

  cout<<p<<endl;
  for(i=y[d];i<y[d]+p;i++)
  {
      cout<<z[i]<<" ";
  }
}
