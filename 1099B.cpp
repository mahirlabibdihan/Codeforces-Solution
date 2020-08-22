#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a; cin>>n;a=sqrt(n);
    if(a*a==n) cout<<2*a;
    else if(n>(a*a)+a) cout<<2*(a+1);
    else cout<<2*a+1;
}
