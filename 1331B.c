#include<stdio.h>

int main()

{
    int n,i;

    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
        if(!(n%i)) {printf("%d%d",i,n/i); break;}

}
