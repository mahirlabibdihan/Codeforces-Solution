#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int t,n,m,i,j;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);

        if(n==1||m==1||(n==2&&m==2)) printf("YES\n");

        else printf("NO\n");
    }
}
