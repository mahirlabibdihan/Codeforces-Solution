#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x; cin>>x; int n=x.length(),i;

    for(i=0;i<n;i++) if(x[i]=='H'|x[i]=='Q'|x[i]=='9') break;

    if(i==n) cout<<"NO"; else cout<<"YES";
}


