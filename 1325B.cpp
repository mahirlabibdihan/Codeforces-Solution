#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main()
{
    int t,n,i,a; cin>>t;

    while(t--)
    {
        cin>>n;  set<int> x;

        for(i=0;i<n;i++) {cin>>a; x.insert(a);}

        cout<<x.size()<<endl;
   }
}
