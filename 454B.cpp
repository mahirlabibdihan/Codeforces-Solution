#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,min=0; cin>>n; vector<int> x(n),y;

    for(i=0;i<n;i++) {cin>>x[i]; if(x[i]<x[min]) min=i;}

    for(k=n-1;k>-1;k--) {if(x[k]==x[min]) i=k; else if(i<n) break;}

    y.insert(y.begin(),x.begin()+i,x.end()); y.insert(y.end(),x.begin(),x.end()-n+i);

    sort(x.begin(),x.end());

    if(y==x) {if(!i) cout<<i; else cout<<n-i;} else cout<<"-1";
}

