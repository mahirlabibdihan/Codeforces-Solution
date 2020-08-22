#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p_b push_back
#define pii pair<int,int>
#define _for(i,a,n) for(i=a;i<n;i++)
#define pi 3.14159265
#define PTR(x) x.begin(),x.end()
#define MAX 200001
#define INF 1e18
#define fast {ios::sync_with_stdio(0);\
        cin.tie(nullptr);}

int main()
{fast
    int n,a=0;    cin>>n;   vector<pii> x(n);
    for(auto &i:x) cin>>i.first>>i.second; sort(PTR(x));
    for(auto &i:x) a=(i.second<a)?i.first:i.second;
    cout<<a;
}
