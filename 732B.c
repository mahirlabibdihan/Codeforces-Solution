#include<stdio.h>

int main()

{
    int n,k,c=0,i;

    scanf("%d %d",&n,&k);

    int x[n];

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

    for(i=0;i<n-1;i=i+2)
    {
        if(x[i]+x[i+1]>k);
        else
            {c=c+k-x[i]-x[i+1]; x[i+1]=x[i+1]+k-x[i]-x[i+1];}



        if(x[i+2]>k-x[i+1]) ;
        else {c=c+k-x[i+1]-x[i+2];  x[i+2]=k-x[i+1];}



    }



    printf("%d\n",c);

     for(i=0;i<n;i++)
        printf("%d ",x[i]);








}
