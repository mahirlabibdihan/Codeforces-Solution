#include<stdio.h>

int main()

{
    int t,n,a,b,c,d,i;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);

        if(n*(a-b)>c+d) printf("NO\n");
        else if(n*(a+b)<c-d) printf("NO\n");
        else printf("YES\n");

    }

}
