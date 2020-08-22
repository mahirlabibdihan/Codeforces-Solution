#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i,j; cin>>n>>t; string x[n][2],a,b;

    for(i=0;i<n;i++) for(j=0;j<2;j++) {cin>>x[i][j]; if(j) x[i][j].push_back(';');}

    while(t--) { cin>>a>>b;

        for(i=0;i<n;i++) if(b==x[i][1]) break;

        cout<<a<<" "<<b<<" #"<<x[i][0]<<endl; }
}
