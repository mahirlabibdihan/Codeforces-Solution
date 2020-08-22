#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

void in(int* x,int n){for(int i=0;i<n;i++) cin>>x[i];}

int main()
{
    int n,m,a,i,j,k,min,c=0,s;

    cin>>n; int y[n]; in(y,n); m=accumulate(y,y+n,0);

    int z[m][4],x[m];  in(x,m);

    for(j=0;j<m;j++)
    {
        min=j; for(i=j+1;i<m;i++) if(x[i]<x[min]) min=i;

        if(min!=j)
        {
            swap(x[min],x[j]);

            s=0;
            for(i=0;s+y[i]<j+1;i++) s+=y[i];

             z[c][0]=i+1; z[c][1]=j+1-s;

            s=0;
            for(i=0;s+y[i]<min+1;i++) s+=y[i];

            z[c][2]=i+1; z[c++][3]=min+1-s;

        }
    }

 cout<<c<<endl; for(i=0;i<c;i++) {for(j=0;j<4;j++) cout<<z[i][j]<<" "; cout<<endl;}

}
