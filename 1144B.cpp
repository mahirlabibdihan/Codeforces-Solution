#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a=0,b=0,c=0,sum=0,d=0,x[2000];     cin>>n;

    for(i=0;i<n;i++) {cin>>x[i]; if(x[i]%2) a++; else b++;}  if(a>b) d++;

    sort(x,x+n); for(i=0;i<n&&c<abs(a-b)-1;i++) if(x[i]%2==d) {c++; sum+=x[i];}

    cout<<sum;
}
