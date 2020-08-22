#include<stdio.h>

int main()

{
    int t,j,l,i;

    scanf("%d",&t);

    while(t--)
    { int k=0;

        char x[10];

     scanf("%s",x);

     l=strlen(x);

     if(l==1) j=x[0];
     else {j=x[0]-1;

     for(i=1;i<l;i++)
     {
         if(x[i]>x[i-1]){k=1; break;}

         else if(x[i]==x[i-1]);

         else break;
     }

     if(i==l) k=1;

     }

     printf("%d\n",(l-1)*9+j-48+k);

    }
}
