#include<iostream>
using namespace std;

void dihan()
{
    int n,m,i,j,a=0,b=0; cin>>n>>m; int x[n][m],y[n]={},z[m]={};

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            {cin>>x[i][j]; if(x[i][j]) {y[i]=1; z[j]=1;}}

    for(int i:y) if(!i) a++;
    for(int i:z) if(!i) b++;

    if(min(a,b)%2) cout<<"Ashish"<<endl;
    else cout<<"Vivek"<<endl;
}
int main(){int t;cin>>t;while(t--)dihan();}
