#include<bits/stdc++.h>
using namespace std;/

void dihan()
{
    int n,k,m; cin>>n>>m>>k;
    if(n/k>=m) cout<<m<<endl;
    else  cout<<(n/k)-ceil(1.0*(m-(n/k))/(k-1))<<endl;
}

int main(){int t;cin>>t;while(t--)dihan();}
