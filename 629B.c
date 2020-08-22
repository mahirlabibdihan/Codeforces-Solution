#include<stdio.h>


int main()
{
    int t;
    long long int k,a,n,i,j,s;

    scanf("%d",&t);

    while(t--)
    {scanf("%lld %lld",&n,&k);



if(k==1)

        for(i=0;i<n;i++)
    {if(i>=n-2)
        printf("b");
    else printf("a");
    }


else{
    a=(n*(n-1)/2)-k;

    for(i=n;a>=i-1;i--)
{
    a=a-(i-1);
}



       j=(((i*(i-1))/2)-k)+1;

       for(s=0;s<n;s++)
       {
         if(s==n-i||s==n-i+j)  printf("b");

         else printf("a");
}
}

    printf("\n");

}}
