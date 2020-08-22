#include <bits/stdc++.h>
using namespace std;

long long s=0;

int main()

{
  multiset<pair<int,int>> c;  vector<int> b;  unordered_set<int> a;

  int n,i=0; cin>>n>>k; int x[n],y[n];

  for(int &i:x)  {cin>>i; a.insert(i);}

  for(int &i:y)  cin>>i;

  for(;i<n;i++) c.insert({x[i],y[i]});

  for(auto i=c.begin();i!=c.end();i++)
       {if(i++->first==i->first) {i--; b.push_back(i->second);}
        else i--;}

  sort(b.begin(),b.end());

  for(i=0;i<k-a.size();i++) s+=b[i];

  cout<<s;
}
