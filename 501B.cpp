#include<iostream>
#include<vector>
using namespace std;

int find(vector<pair<string,string>> &x,string c)
{
   int i;
   for(i=0;i<x.size();i++) if(x[i].first==c) return i;
   return i;
}

int main()
{
    int n,i,k; cin>>n; string a;

    vector<pair<string,string>> x(n); vector<string> y;

    for(auto &i:x) cin>>i.first>>i.second;

    while(x.size())
    {
        y.push_back(x[0].first); i=0;
        while(i!=x.size())
        {
            a=x[i].second;
            x.erase(x.begin()+i);
            i=find(x,a);
        }
        y.push_back(a);
    }

    cout<<y.size()/2<<endl;
    for(i=0;i<y.size();i++)
    {
        cout<<y[i];
        if(i%2) cout<<endl; else cout<<" ";
    }
}
