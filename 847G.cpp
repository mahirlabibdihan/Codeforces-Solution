#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n; int x[n][7],max=0,a,i,j;

    for(i=0;i<n;i++) for(j=0;j<7;j++) scanf("%1d",&x[i][j]);

    for(j=0;j<7;j++)
        {
            a=0;

            for(i=0;i<n;i++)
              a+=x[i][j];

          if(a>max) max=a;
        }

    cout<<max;
}
