#include<stdio.h>

int main()

{
    int n,k,i,c=0,x[100001];

    scanf("%d %d",&n,&k);

    for(i=0;i<n;i++)
       {scanf("%d",&x[i]);
       c+=ceil(1.0*x[i]/k);}

    c=ceil(1.0*c/2);

    printf("%d",c);
}
