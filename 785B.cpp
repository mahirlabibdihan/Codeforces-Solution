#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b=1e9,c=0,d=1e9,n,x,y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        a=max(a,x);
        b=min(b,y);
    }
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        c=max(c,x);
        d=min(d,y);
    }

    x=max(c-b,a-d); if(x<0) x=0;
    cout<<x;
}
