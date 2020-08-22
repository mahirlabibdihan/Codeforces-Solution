#include<stdio.h>

int main()
{
  int t,y,i,max,j,n,k,a;

  scanf("%d",&t);

  while(t--)

  {
     scanf("%d",&n);



     int x[n];

     for(i=0;i<n;i++)
        scanf("%d",&x[i]);

if(n==1) printf("YES\n");
else{
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


        for(i=0;i<n;i++)
        { if(i==n-1) break;
           else if((x[i+1]-x[i])%2>0)
                break;

        }

        if(i==n-1) printf("YES\n");
        else printf("NO\n");
 } }}
