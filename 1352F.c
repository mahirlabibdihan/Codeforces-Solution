#include<stdio.h>

int main()
{
    int t,a,b,c,i,x;

    scanf("%d\n",&t);

    while(t--)
    {
        scanf("%d %d %d",&c,&b,&a);

        {
            if(a) for(i=0; i<=a; i++) printf("1");

            if(!a) i=0; else i=1;  if(b&&!(b%2)&&c) x=b-1; else x=b;

            if(b)for(; i<=x; i++) { if(i%2) printf("0"); else printf("1"); }

            if(c)
            {   if(b&&!(b%2)) i=1; else { if(!b||!(b%2)) i=0; else i=1; }

                for(; i<=c; i++) printf("0"); }

                if(b&&!(b%2)&&c) printf("1\n"); else printf("\n");
        }
    }
}
