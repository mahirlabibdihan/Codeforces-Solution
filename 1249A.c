#include<stdio.h>

int main()
{
   int t,i,j,n,max,k;

    scanf("%d",&t);



while(t--)
   {scanf("%d",&n);

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

           k=x[max];

            x[max]=x[j-1];
           x[j-1]=k;
       }
     }

for(i=0;i<n-1;i++)
{
    if(x[i+1]-x[i]==1) break;
}

if(i==n-1) printf("1\n");

else printf("2\n");


}
}
