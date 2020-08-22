#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,max=0,j,k,a=1;

    cin>>n;

    vector<int> x(n),y(n);

    for(i=0;i<n;i++)
        {cin>>x[i]; y[i]=x[i];
        if(x[i]>x[max]) max=i;}

    sort(y.begin(),y.end());

    for(i=max-1,j=max+1,k=y[n-1-a];a<n;a++)
    {
        if(i>-1&x[i]==y[n-1-a]) i--;

        else if(j<n&x[j]==y[n-1-a]) j++;

         else {cout<<"NO"; break;}
    }

    if(a==n) cout<<"YES";
}
