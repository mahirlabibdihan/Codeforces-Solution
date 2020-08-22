#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char x[11];

    gets(x);

    int i,sum=0,n=strlen(x),c=0;

    for(i=0;i<n;i++)
    {if(x[i]=='4') x[i]=0;
        else x[i]=1;}

    for(i=n-1;i>-1;i--)
       sum+=x[i]*pow(2,c++);

    c=pow(2,n)-1+sum;

    printf("%d",c);
}
