#include<stdio.h>

int main()

{
    int n,a,b;

    scanf("%d %d %d",&n,&a,&b);

    if(n-a>b) printf("%d",b+1);

    else if(n-a==b)  printf("%d",b);

    else printf("%d",n-a);
}
