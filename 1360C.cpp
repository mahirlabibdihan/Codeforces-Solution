#include<bits/stdc++.h>
using namespace std;

void dihan()
{
    int n,i,a=0,b=0; cin>>n; int x[n];

    for(i=0;i<n;i++) {cin>>x[i]; if(x[i]%2) b++; else a++;}

    if(!(a%2)&!(b%2)) cout<<"YES";

    else
    {
        sort(x,x+n);

        for(i=1;i<n;i++) if(x[i]==x[i-1]+1) break;

        if(i==n) cout<<"NO"; else  cout<<"YES";
    }

    cout<<endl;

    return;
}

int main(){int t; cin>>t; while(t--) dihan();}

