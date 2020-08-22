#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,c=1; cin>>n; int x[n];

    for(i=0;i<n;i++) cin>>x[i]; sort(x,x+n);

    for(i=0;i<n;i++) if(x[i]>=c) c++;

    cout<<c-1;
}
