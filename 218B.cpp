#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,i,j,s=0,sum=0,c=0,d=0;

    cin>>k>>n; int x[n];

    for(i=0;i<n;i++) cin>>x[i]; sort(x,x+n);

    for(i=0;d+x[i]<=k;i++) d+=x[i];

    for(j=0;j<i;j++) sum+=(x[j]*(x[j]+1))/2;

    for(j=x[i];j>x[i]-k+d;j--) sum+=j;

    for(i=n-1;c<k;i--)
    {
        if(i==n-1) {s+=x[i]--; c++;}

        else if(x[i]>x[n-1]) {s+=x[i]--; c++;}

        if(i==0) i=n;
    }

    cout<<s<<" "<<sum;
}
