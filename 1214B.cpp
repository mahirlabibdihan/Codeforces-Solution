#include<bits/stdc++.h>
using namespace std;

int main()

{
    int a,b,n; cin>>a>>b>>n;

    if(a>n|b>n) cout<<min(n,min(a,b))+1;

    else cout<<a+b-n+1;
}
