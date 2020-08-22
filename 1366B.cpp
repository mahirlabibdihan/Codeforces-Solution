#include<bits/stdc++.h>
using namespace std;


void dihan()
{
    long long s=0;
    int n,i,j,k,x,m,c=-1,a=1000000001,b=0,d=1;
    cin>>n>>x>>m;

    vector<vector<int>> z(m,vector<int>(2));

    for(i=0; i<m; i++)
    {
        cin>>z[i][0]>>z[i][1];

        if(z[i][0]<=x&x<=z[i][1])
        {
            if(c<0) c=i;
            if(a<-1&b<-1)
            {
                a=z[i][0];
                b=z[i][1];
            }
            else
            {
                a=min(a,z[i][0]);
                b=max(b,z[i][1]);
            }
        }
    }




    if(c>-1)
    {


      while(d)
        {d=0;
            for(i=c; i<m; i++)
        {
            if(b>=z[i][0]|a<=z[i][1])
            {if(z[i][0]<a|z[i][1]>b) d=1;
                a=min(a,z[i][0]);
                b=max(b,z[i][1]);

            }

        }}





        s+=b-a+1;
    }

    cout<<s<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)dihan();
}

