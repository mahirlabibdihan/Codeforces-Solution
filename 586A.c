
#include <stdio.h>


int main()
{


 int n,i,c=0,a=0;

    scanf("%d",&n);

     int x[n];

    for(i=0;i<n;i++)
    	scanf("%d",&x[i]);

    for(i=0;i<n;i++)
    {
         if(x[i])  {c++;

         	if(a>1) c--;   a=0;  }

         else if(c&&!x[i])
         {a++;

            if(a==1) c++;

           }
    }
if(c&&!x[n-1]) c--;

    printf("%d",c);

    }

