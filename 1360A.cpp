#include<bits/stdc++.h>
using namespace std;

void dihan()
{
    int a,b,c; cin>>a>>b;

    c=max(2*min(a,b),max(a,b)); cout<<c*c<<endl;

    return;
}

int main(){int t; cin>>t; while(t--) dihan();}
