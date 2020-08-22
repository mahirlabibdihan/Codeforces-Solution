#include<stdio.h>

int main()

{
    int n,i,j,k,min,p,q;

    scanf("%d",&n);

    int x[n];

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

     for(j=0;j<n;j++)
     {
       min=j;

       for(i=j+1;i<n;i++)
       {
           if(x[i]<x[min])
           {
               min=i;
           }
       }
            k=x[min];
           x[min]=x[j];
           x[j]=k;

        }

 for(i=0;i<n;i++)
        printf("%d ",x[i]);

        for(i=0;2*x[i]<=x[n-1];i++);


        if(n-i>=i) {

            for(j=i;j<n;j++)
            {
                if(x[0]<=x[j]) break;
            }

            printf("%d",j);
        }

        else
        {
         p=(i+i-n)/2;


         for(j=0;j<m;j++)
         {
             for(q=i-1;q>j+1;q--)
                if(2*x[j]<x[q]) break;


         }

         if(j=m)
        }

}
