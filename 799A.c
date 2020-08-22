#include<stdio.h>
#include<math.h>

int main()

{
    int n,t,k,d,i;
    scanf("%d %d %d %d",&n,&t,&k,&d);

    for(i=0;(i+1)*t<=d;i++);

    if(d<(ceil(1.0*n/k)-ceil(1.0*(n-(i*k))/(2*k)))*t) printf("YES");
    else printf("NO");
}
