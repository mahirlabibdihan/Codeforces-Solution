#include<stdio.h>
#include<math.h>

int main()

{
    int r,a,b,c,d,x;

    scanf("%d %d %d %d %d",&r,&a,&b,&c,&d);

    x=ceil(sqrt(pow(c-a,2)+pow(d-b,2))/(2*r));

    printf("%d",x);
}
