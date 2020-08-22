#include<stdio.h>

void swap(int *a,int *b){int c=*a; *a=*b; *b=c;}

void sort(int x[],int y[], int n){int i, j; for (j=0;j<n-1;j++)for (i=0;i<n-1-j;i++)if(x[i]<x[i+1]){swap(&x[i],&x[i+1]); swap(&y[i],&y[i+1]);}}

int main()
{
    int n,i,sum=0;

    scanf("%d",&n);

    int x[n],y[n];

    for(i=0;i<n;i++) {scanf("%d",&x[i]); y[i]=i+1;}

    sort(x,y,n);

    for(i=0;i<n;i++) sum+=(x[i]*i)+1;

    printf("%d\n",sum);

    for(i=0;i<n;i++) printf("%d ",y[i]);
}
