#include<bits/stdc++.h>
using namespace std;

void dihan()
{
        int n,i,j,s; cin>>n;

        int x[n],c=n+1; map<int,int> y;

        for(i=0; i<n; i++) cin>>x[i];

        for(j=0; j<n; j++)
            {
              if(!y[x[j]])  y[x[j]]=j+1;

              else  { s=j-y[x[j]]+2; if(c>s) c=s; y[x[j]]=j+1;}
            }

        if(c<n+1) cout<<c<<endl;

        else cout<<"-1"<<endl;

        return;
}

int main(){int t;cin>>t;while(t--) dihan();}


