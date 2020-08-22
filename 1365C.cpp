#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main()
{
    int n,i,j,a; cin>>n; int x[n],y[n],z[n]={}; unordered_map<int,int> b;

    for(auto &i:x) cin>>i;

    for(i=0;i<n;i++) {cin>>a; b[a]=i;}

    for(i=0;i<n;i++)
    {
        if(b[x[i]]>=i) z[b[x[i]]-i]++;
        else z[n+b[x[i]]-i]++;
    }

    cout<<*max_element(z,z+n);
}
