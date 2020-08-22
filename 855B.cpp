#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,i,s=0,j=0,max=0,min=0,k;

    cin>>n;

    vector<ll> x(n),y(3);

    for(i=0; i<3; i++) cin>>y[i];

    for(i=0; i<n; i++) cin>>x[i];



    for(i=0; i<3; i++)
    {
        if(y[i]<0)
        {
            min=j;
            for(k=j; k<n; k++) if(x[k]<x[min]) min=k;

            s+=y[i]*x[min];

            j=min;
        }


        else
        {
            max=j;
            for(k=j; k<n; k++) if(x[k]>x[max]) max=k;


            s+=y[i]*x[max];

            j=max;
        }

    }
    cout<<s;
}

