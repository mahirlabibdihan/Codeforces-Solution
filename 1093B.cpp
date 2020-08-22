#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n;

    cin>>t;

    while(t--)
    {
        string x;  cin>>x;

        int n=x.length();

        sort(x.begin(),x.end());

        for(i=0; i<n-1; i++) if(x[i]!=x[i+1]) break;

        if(i==n-1) cout<<"-1\n";
        else cout<<x<<"\n";
    }
}
