#include<bits/stdc++.h>
using namespace std;


#define s 100001

int main()
{
    short y[s]={}; y[2]=1 y[1]=1;

    for(i=3;i<s;i+=2) y[i]=1;


    for(i=3;i*i<s;i+=2)
    {
        if(y[i])
        {
            for(j=3*i;j<s;j+=2*i)
                y[j]=0;
        }
    }

}
