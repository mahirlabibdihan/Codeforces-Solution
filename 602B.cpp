#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;

    int x[n],a,max=0,i,j;

    for(i=0;i<n;i++) cin>>x[i];

    for(i=0;i<n-1;i++)
    {
        set<int> y; y.insert(x[i]); a=-1;

        for(j=i+1;j<n;j++)
        {
            y.insert(x[j]);

            if(a<0&y.size()==2) a=j-1;

            else if(y.size()==3) { if(j-i>max) max=j-i; i=a; break;}
        }

        if(j==n) {if(j-i>max) max=j-i; break;}
    }
    cout<<max;
}
