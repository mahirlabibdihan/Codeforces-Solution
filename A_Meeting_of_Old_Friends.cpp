#include <iostream>
using namespace std;

int main()
{
    long long l1,r1,l2,r2,k;
    cin>>l1>>r1;
    cin>>l2>>r2;
    cin>>k;
    long long ans=0,l=k,r=k;
    if(l2<=l1 && r2>=r1)
    {
        l=l1;
        r=r1;
    }
    else if(l2<=l1 && r2>=l1)
    {
        l=l1;
        r=r2;
    }
    else if(l2<=r1 && r2>=r1)
    {
        l=l2;
        r=r1;
    }
    else if(l2>=l1 && r2<=r1)
    {
        l=l2;
        r=r2;
    }
    if(k>=l && k<=r) ans=r-l;
    else ans=r-l+1;
    cout<<ans;
}