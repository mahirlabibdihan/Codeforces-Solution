#include<stdio.h>

int main()
{
    int t,a,b,c,d;

    scanf("%d",&t);

    while(t--)
    {
       scanf("%d %d",&a,&b);


       if(b>a)

        printf("%d\n",b-a);

       else if(a%b==0)

        printf("0\n");

       else if(a>b)
       {
           c=a%b;


           printf("%d\n",b-c);

       }
    }

}
