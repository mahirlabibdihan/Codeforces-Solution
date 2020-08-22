#include<stdio.h>
#include<math.h>

int main()


{
    int n,m,i,j,a,b,c=0;

    scanf("%d %d",&n,&m);

    a=m/n;

    if(m%n) printf("-1");

   else if(m==n)  printf("0");

    else
    {
       while(1)
       {
         if(a%3==0)  { a/=3;  c++;}

         else if(a%2==0) { a/=2;  c++;}

         else {printf("-1"); break;}

         if(a==1) {printf("%d",c); break;}
       }


    }
}
