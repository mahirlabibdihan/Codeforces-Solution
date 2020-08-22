#include<stdio.h>

int sort(int x[],int n)
{int i,j,k,min;for(j=0;j<n;j++){min=j;for(i=j+1;i<n;i++)if(x[i]<x[min])min=i;if(min!=j){k=x[j];x[j]=x[min];x[min]=k;}}
    return x[n];
}

int main()
{
    int n,i,j,x[1001],c=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
     scanf("%d",&x[i]);

    sort(x,n);

    for(i=0;i<n-1;i++)
    {
       if(x[i]&&x[i]==x[i+1])
       { c++;  if(i<n-2&&x[i+1]==x[i+2]) {printf("-1");  break;}  i++; }
    }

    if(i>=n-1) printf("%d",c);
}
