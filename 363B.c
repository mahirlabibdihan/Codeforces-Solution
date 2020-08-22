#include<stdio.h>

int main()

{
   long int n,k,i;

   scanf("%ld %ld",&n,&k);

   long int x[n];

   for(i=0;i<n;i++)
    scanf("%d",&x[i]);

    if(n==k) printf("1");

   else{ long int sum=0,min=0,a=1,p=0;

    for(i=0;i<k;i++)
        sum+=x[i];
        min=sum;

    for(i=k;i<n;i++)
    {
       sum+=x[i];
       sum-=x[p++];

    if(min>sum) {min=sum; a=p+1;}
    }

   printf("%ld",a);}
}
