#include<stdio.h>

int main()

{
    int n,a=0;

    scanf("%d",&n);

    if(n%3) a=1;

    printf("%d",2*(n/3)+a);
}
