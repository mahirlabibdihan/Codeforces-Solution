#include<stdio.h>
#include<string.h>


int main()
{
    char x[100001];

    gets(x);

    int t,n=strlen(x),a,b,i,y[100001]={},sum=0;

    for(i=0;i<n-1;i++)
     { y[i+1]=sum;
         if(x[i]==x[i+1]) y[i+1]++; sum=y[i+1];}

     scanf("%d",&t);

     while(t--)
     {
         int c=0;

         scanf("%d %d",&a,&b);

         printf("%d\n",y[b-1]-y[a-1]);
     }
}
