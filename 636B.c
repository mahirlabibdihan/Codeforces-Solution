
#include<stdio.h>

int main()

{
   long long int t,n,i,j,a,b;


   scanf("%lld",&t);

   while(t--)
   { a=0; b=0;
       scanf("%lld",&n);

       if((n/2)%2)  printf("NO\n");

       else
       {
           printf("YES\n");

           for(i=1,j=2;i<=n/2;i++,j=j+2)
           {
               printf("%lld ",j);
           a+=j;}

           for(i=1,j=1;i<n/2;i++,j=j+2)
           {
               printf("%lld ",j);

               b+=j;
           }

           printf("%lld\n",a-b);
   }
}

}
