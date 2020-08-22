#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>>x; vector<int> y;
    int a,n,s=0,m=0,l=0,r=0,b=-1,i; cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        x.push_back({a,i});
    }

    sort(x.begin(),x.end());

for(auto i:x) cout<<i.first<<" "<<i.second<<endl; cout<<endl;


    a=x[0].first; b=x[0].second;  y.push_back(b+1);

    for(i=1;i<n;i++)
    {r=i;

       if()

       if(a<x[i].first-) {b=-1; i=l; r=i;}

       if(a==x[i].first-1)
        {

            if(x[i].second>b)
        {
            a=x[i].first; b=x[i].second;

            y.push_back(b+1);
        }

        }
    }

     m=1;
    for(auto i:y) cout<<i<<" "; cout<<endl;


for(i=0;i<y.size()-1;i++)
{
   if(y[i]<y[i+1]){m++; }

   else {if(m>=s) {s=m; n=i+1; m=1;}}
}
if(m>=s) {s=m; n=i+1; m=1;}
cout<<s<<endl;

for(i=n-s;i<n;i++) cout<<y[i]<<" ";
}

