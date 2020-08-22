#include<iostream>
using namespace std;

int main()
{
    long long n,t,i,m=0,r=0,s=0;

    cin>>n>>t; int x[n];

    for(i=0;i<n;i++)
      {
        cin>>x[i];

        if(s>t) s-=x[r++];

        s+=x[i]; if(s<=t) m=max(m,i-r+1);
      }

    cout<<m;
}
