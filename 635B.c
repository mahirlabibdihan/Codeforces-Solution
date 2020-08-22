#include<stdio.h>
#include<math.h>


int main()

{
    int t,n,a,b,sum,i;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d",&n,&a,&b);

        for(i=0;i<a;i++)
        { if(n<21) break;

           n=(n/2)+10;
        }

        if(n<=(b*10)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;

}

