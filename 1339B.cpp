#include<bits/stdc++.h>
using namespace std;

int main()
{int t; cin>>t; while(t--)

    { int  n,i,j; cin>>n; vector<int> x(n);

    for(int &i:x) cin>>i; sort(x.begin(),x.end());

    deque<int> y(x.begin(),x.end());

    for(i=n-1;i>-1;)
    {
        x[i--]=y.back(); if(i==-1) break; x[i--]=y.front();
        y.pop_back(); y.pop_front();
    }

    for(int i:x) cout<<i<<" "; cout<<endl;}
}
