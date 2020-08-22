#include<iostream>
using namespace std;

int main()
{
    int n,m,i,max,sum=0,j;

    cin>>n>>m;

    char x[n][m+1];  int z[m];

    for(i=0;i<n;i++) cin>>x[i];

    for(i=0;i<m;i++) cin>>z[i];

    for(j=0;j<m;j++)
    {
     int y[0]={}; for(i=0;i<n;i++) y[x[i][j]-65]++;

     max=y[0]; for(i=0;i<5;i++) if(max<y[i]) max=y[i];

     sum+=max*z[j];
    }
   cout<<sum;
}
