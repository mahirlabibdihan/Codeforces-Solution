#include<stdio.h>

int main()
{
    int t,a,b,i,j;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&a,&b);

        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(i==a-1&&j==b-1) printf("W");
                else printf("B");
            }
           printf("\n");
        }
    }
}
