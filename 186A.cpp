#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string x,y; cin>>x>>y; int i,n=x.length(),s=y.length();

    vector<char> a,b;

    for(i=0;i<n;i++) if(x[i]!=y[i]) { a.push_back(x[i]); b.push_back(y[i]);}

    if(n==s&a.size()==2) if(a[0]==b[1]&b[0]==a[1]) cout<<"YES"; else cout<<"NO";
    else cout<<"NO";
}
