#include<stdio.h>

int main()

{
    int n,m,i,j,k,max,sum=0;

    scanf("%d %d",&n,&m);

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

      for(i=0;i<m&&x[i]<0;i++)
            sum=sum+x[i];

      printf("%d",-1*sum);


}
