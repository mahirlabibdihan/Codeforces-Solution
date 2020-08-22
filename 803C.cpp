#include<iostream>
using namespace std;

int main()
{
    int n,k,i; cin>>n>>k;

    if(k*(k+1)/2<n)
    {

    }

    else if(k*(k+1)/2==n)
    {
        for(i=1;i<=k;i++)
            cout<<i<<" ";
    }
    else cout<<"-1";
}
