#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int t,n,m,i;

    cin>>t;

    while(t--)
    {
        string x,y,z;

        cin>>x>>y; sort(x.begin(),x.end());

        n=x.length(); m=y.length();

        for(i=0;i<=m-n;i++)
        {
            z.insert(z.begin(),y.begin()+i,y.begin()+i+n);

            sort(z.begin(),z.end());

            if(!x.compare(z)) break;

            z.clear();
        }

        if(i>m-n) cout<<"NO"<<endl; else cout<<"YES"<<endl;}
}
