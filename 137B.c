#include<stdio.h>

int sort(int x[],int n)
{int i,j,k,min;for(j=0;j<n;j++){min=j;for(i=j+1;i<n;i++)if(x[i]<x[min])min=i;if(min!=j){k=x[j];x[j]=x[min];x[min]=k;}}
    return x[n];
}

int main()
{
    int n,i,j,c=0,x[5001],y[5001]={};

    scanf("%d",&n);

    for(i=0;i<n;i++)
     {scanf("%d",&x[i]);
     y[x[i]]=1;}

    for(i=1;i<=n;i++)
        if(!y[i])  c++;

    printf("%d",c);

}
