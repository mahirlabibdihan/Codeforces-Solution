#include<bits/stdc++.h>
using namespace std;

#define pi 3.14159265

int main()
{
    int t; cin>>t;

    while(t--)
    {
        float a,n;
        cin>>n;

        a=1/(tan(pi/(2*n)));

       printf("%0.9f\n",a);

    }
}
