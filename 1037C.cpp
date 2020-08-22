#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c=0;

    cin>>n;

    char x[2][n];

    for(i=0;i<2;i++)
        cin>>x[i];


    for(i=0;i<n;i++)
    {
        if(x[0][i]!=x[1][i])
        {c++;
          if(x[0][i+1]!=x[1][i+1]&&x[0][i]!=x[0][i+1]) i++;
        }
    }

    cout<<c;

}
