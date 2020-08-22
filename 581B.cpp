#include<iostream>
using namespace std;

int main()
{
    int n,m=0,i; cin>>n; int x[n],y[n];

    for(int &i:x) cin>>i;

    for(i=n-1;i>-1;i--)
        if(x[i]>m) {y[i]=0; m=x[i];}
        else {y[i]=m-x[i]+1;}

    for(int i:y) cout<<i<<" ";
}
