#include<stdio.h>

int main()

{
    long long int n,a=0,b=0,i,c,p=0,q=0;

    scanf("%lld",&n);

    long long int x[n];

    for(i=0;i<n;i++)
        {scanf("%lld",&x[i]);
        if(x[i]>0) {a++; p+=x[i];}
        else if(x[i]<0) {b++; q+=x[i];}}

        c=n-a-b;

        if(b%2) n=2;
        else n=0;
        if(c) n=0;

        printf("%lld",p-a-q-b+c+n);


}
