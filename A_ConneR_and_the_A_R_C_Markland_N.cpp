#include <iostream>
#include <algorithm>
#include <climits>
#include <map>
using namespace std;

int search(int* a,int s,int k)
{
    int l=0,r=k;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]>s) r=m-1;
        else if(a[m]<s) l=m+1;
        else return m; 
    }
    if(a[l]>s) return r;    // s is smaller than all the elements
    else return l;
}
void solve()
{
    int n,s,k;
    cin>>n>>s>>k;
    int a[1000];

    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }

    sort(a,a+k);
    int pivot=search(a,s,k);
    if(pivot>k-1 || pivot<0 || a[pivot]!=s)
    {
        cout<<0<<endl;
    }
    else
    {
        int ans=INT_MAX,i;
        for(i=max(pivot,0);i<k-1;i++)
        {
            if(a[i]+1<a[i+1])
            {
                break;
            }
        }
        if(a[i]<n) ans=min(ans,a[i]+1-s);

        for(i=min(pivot,k-1);i>0;i--)
        {
            if(a[i]-1>a[i-1])
            {
                break;
            }
        }
        if(a[i]>1) ans=min(ans,s-(a[i]-1));
        cout<<ans<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}