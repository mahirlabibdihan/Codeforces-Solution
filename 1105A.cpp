#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,min=100000,sum;

    cin>>n; int x[n],i,j,c;

    for(int &i:x) cin>>i;

    for(i=0;i<101;i++)
    {
        for(j=0,sum=0;j<n;j++) if(x[j]!=i) sum+=abs(i-x[j])-1;

        if(sum<=min){min=sum; c=i;}
    }

     cout<<c<<" "<<min<<endl;
}
