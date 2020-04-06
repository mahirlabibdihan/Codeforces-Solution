#include<stdio.h>

int main()

{
    int n,max,i,j,k;

    scanf("%d",&n);

    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);

    for(j=n;j>0;j--)
     {
       max=0;

       for(i=1;i<j;i++)
       {
           if(x[i]>x[max])
           {
               max=i;
           }
       }
            k=x[max];
           x[max]=x[j-1];
           x[j-1]=k;

        }
    int c=0;

    for(i=1;i<n;i=i+2)
    {
        if(x[i-1]==x[i]) ;

        else c=c+x[i]-x[i-1];
    }

    printf("%d",c);
}
