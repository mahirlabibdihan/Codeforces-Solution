#include<bits/stdc++.h>
using namespace std;

void dihan()
{
    int n,i,j; cin>>n; int x[n][n];

    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%1d",&x[i][j]);

    for(i=0;i<n-1;i++)
        for(j=0;j<n-1;j++)
    {
        if(x[i][j]){if(!x[i][j+1]&!x[i+1][j]) goto X;}
    }

    X: if(i==n-1) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

    return;
}

int main(){int t; cin>>t; while(t--) dihan();}

