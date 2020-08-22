#include<stdio.h>

int main()
{
    int n,k,i,min;

    scanf("%d %d\n",&n,&k);

    char x[n]; int y[k];

    gets(x);

    for(i=0;i<n;i++) x[i]-=65;

    for(i=0;i<k;i++) y[i]=0;

    for(i=0;i<n;i++) y[x[i]]++; min=y[0];

    for(i=0;i<k;i++) if(y[i]<min) min=y[i];

    printf("%d",k*min);
}
