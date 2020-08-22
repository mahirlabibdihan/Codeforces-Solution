#include<stdio.h>

int main()

{
    int k,r,i,j,n;

    scanf("%d %d",&k,&r);

    n=k%10;

    for(i=1;i*n%10!=r&&i*n%10!=0;i++) ;

    printf("%d",i);
}
