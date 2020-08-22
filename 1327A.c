#include<stdio.h>

int main()

{
    int t,n,k;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&k);

        if((k<=n)&&((n%2&&k%2)||(!(n%2)&&!(k%2)))) printf("YES\n");
        else printf("NO\n");
    }
}
