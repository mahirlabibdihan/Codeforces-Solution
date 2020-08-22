#include<iostream>
using namespace std;

int main()
{
    int t,n,i; cin>>t;

    while(t--)
    {
        cin>>n;

        int x[n],c=0,min=1000001;

        for(int &i:x) cin>>i;

        for(i=n-1;i>-1;i--)
          if(x[i]<=min) min=x[i]; else c++;

        cout<<c<<endl;
    }
}
