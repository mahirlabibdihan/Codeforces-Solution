#include<stdio.h>
#include<math.h>

int main()

{
    int n,a,b,min=0,max=0,i;

    scanf("%d %d %d",&n,&a,&b);

    for(i=a-1;i>-1;i--)
        min+=pow(2,i);
    min+=(n-a)*pow(2,i+1);

    for(i=0;i<b;i++)
        max+=pow(2,i);
    max+=(n-b)*pow(2,i-1);

    printf("%d %d",min,max);
}
