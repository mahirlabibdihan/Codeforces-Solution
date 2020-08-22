#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
   map<string,string> x; string a,b,c; vector<string> y;
   int n,m,i; cin>>m>>n;
   for(i=0;i<n;i++)
   {
       cin>>a>>b;
       c=(a.length()>b.length())?b:a;
       x[a]=c; x[b]=c;
   }
   while(m--)
   {
       cin>>a;
       y.push_back(x[a]);
   }
   for(auto i:y) cout<<i<<" ";
}
