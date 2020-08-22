#include<stdio.h>

int main()
{
    int t,n;
scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        if(n%2==0) printf("%d %d\n",n/2,n/2);

        else  printf("1 %d\n",n-1);
    }
}
