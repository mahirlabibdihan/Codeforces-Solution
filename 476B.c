#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()

{
    char x[11],y[11];

    gets(x); gets(y);

    int c=0,a=0,e=0,j=0,i,n=strlen(x);
    float p;

    for(i=0;i<n;i++)
    {
        if(x[i]=='+') c++;
        else c--;

        if(y[i]=='?') a++;
        else if(y[i]=='+') e++;
        else if(y[i]=='-') e--;
    }

      n=abs(c-e);

      if(n>a) p=0;
       else
          {
              for(i=a;i>=0;i-=2,j++)
               if(n==i) break;
               n=1; c=1; e=1;
              for(i=1;i<=a;i++)
                    n*=i;
              for(i=1;i<=j;i++)
                   c*=i;
              for(i=1;i<=a-j;i++)
                 e*=i;

            p=(1.0*n/(c*e))/pow(2,a);
          }

   printf("%.12f",p);
   }


