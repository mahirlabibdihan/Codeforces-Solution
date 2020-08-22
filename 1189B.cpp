#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,i; cin>>n; vector<int>x(n);
    for(int &i:x) cin>>i;
    sort(x.begin(),x.end(),greater<int>());
    a=x[0]-x[1];
    for(i=n-1;i>1;i--)
        if(x[i]>a) {a=x[i]; x.erase(x.begin()+i); x.push_back(a); break;}
    if(i>1) {cout<<"YES"<<endl; for(int i:x) cout<<i<<" ";}
    else cout<<"NO";
}
