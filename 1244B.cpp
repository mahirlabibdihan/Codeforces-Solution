#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,c,b; string x;

    cin>>t;

    while(t--)
    {
        cin>>n>>x;

        a=x.find('1'); b=x.find_last_of('1');

        if(a>-1)  {c=(a>=n/2)?a+1:n-a; if(b+1>c)  c=b+1; cout<<2*c<<endl;}

        else cout<<n<<endl;

    }
}
