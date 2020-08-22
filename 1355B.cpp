#include<bits/stdc++.h>
using namespace std;

void in(int* x,int n){for(int i=0;i<n;i++)cin>>x[i];}

int main()
{
    int t,n,i,j,c,s,k;

    cin>>t;

    while(t--)
    { c=0; s=0; j=0;

        cin>>n;

        int x[n];  in(x,n); sort(x,x+n);

        for(i=1;i<=n;i++)
        {k=0; for(;j<n;j++) { if(i!=x[j]) break; else k++; }

         c+=((k+s)/i); s=((k+s)%i);
        }

        cout<<c<<endl;
    }
}
