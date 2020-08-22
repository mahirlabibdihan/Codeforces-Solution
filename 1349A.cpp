#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b)

{
    while(a)
     {
        int c=a;
        a=b%a;
        b=c;
     }

     return b;
}


int main()
{

    int n,i,a=0,b,LCM,GCD,j,k; cin>>n; int x[n],y[n*(n-1)/2];

    for(i=0;i<n;i++) cin>>x[i];

    a=gcd(x[n-1],x[n-2]);
    b=x[0]*x[1]/gcd(x[0],x[1]);
    GCD=gcd(a,b);


    cout<<GCD;
}

