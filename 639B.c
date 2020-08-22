#include<stdio.h>

int main()
{
    int t,n,i,j;

    scanf("%d",&t);

    while(t--)
    {
        int sum,c;

        scanf("%d",&n);

        for(c=0;n>1;c++)
        {   for(sum=0,i=0;sum+i+(2*(i+1))<=n;i++)
              sum+=i+(2*(i+1));
              n-=sum; }

        printf("%d\n",c);
    }
}
