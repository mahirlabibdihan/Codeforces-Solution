#include<stdio.h>

void sort(int x[],int n)
{
    int i,j,k,min;
    for(j=0; j<n; j++)
    {  min=j;   for(i=j+1; i<n; i++)  if(x[i]<x[min])  min=i;
     if(min!=j) { k=x[j];  x[j]=x[min];  x[min]=k; }}}

int sum(int x[],int n)
  { if(n) return(sum(x,n-1)+x[n-1]);
    else return 0;  }


int main()

{
    int n,s,i,j,c,x[101];

    scanf("%d %d",&n,&s);

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

    sort(x,n);  c=sum(x,n-1);

    if(c>s) printf("NO");
    else printf("YES");
}
