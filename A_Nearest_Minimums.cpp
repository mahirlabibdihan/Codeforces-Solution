#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100000];
    int _min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<_min)
        {
            _min=a[i];
        }   
    }

    int idx=-1,minDist=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]==_min)
        {
            if(idx>-1)
            {
                minDist=min(minDist,i-idx);
            }
            idx=i;
        }
    }
    cout<<minDist;
}