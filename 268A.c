#include<stdio.h>

int main()

{
   int n,i,j,a=0,c=0;

   scanf("%d",&n);

   int x[n],y[n];

   for(i=0;i<n;i++)
        scanf("%d %d",&x[i],&y[i]);

   for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
         if(x[i]==y[j]) a++;
    c+=a; a=0;}

   printf("%d",c);
}
