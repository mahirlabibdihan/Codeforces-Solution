#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m][n];
    map<int,int> c;
    for(int i=0;i<m;i++)
    {
        int _max=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]>a[i][_max])
            {
                _max=j;
            }
        }
        c[_max]++;
    }

    int _max=0;
    for(auto i:c)
    {
        //cout<<i.first<<" "<<i.second<<endl;
        if(i.second>c[_max])
        {
            _max=i.first;
        }
    }
    cout<<_max+1;
}