#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int t;

    scanf("%d\n",&t);

    while(t--)
    {
        int a,i; int n,c=0;

        scanf("%d",&a);

        for(n=1;floor(a/pow(10,n));n++);

        int x[n];

        for(i=1;i<=n;i++)
        {
            if(a%pow(10,i))
            {

               x[c++]=(a%pow(10,i))/pow(10,i-1)*pow(10,i-1);
               a=a/pow(10,i)*pow(10,i);

            }
        }

        printf("%d\n",c);





    }
}
