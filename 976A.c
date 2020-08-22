#include<stdio.h>

int main()

{
    int n,i;

    scanf("%d",&n);

    char x[n];

    scanf("%s",x);

    for(i=0;i<n;i++)
    {     if(!i&&x[i]=='1')  printf("1");
        if(x[i]=='0') printf("0");
    }
}
