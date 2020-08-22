#include<stdio.h>

int main()

{
    float n,sum=0,i;

    scanf("%f",&n);

    for(i=n;i>0;i--)
        sum+=(1/i);

    printf("%.12f",sum);
}
