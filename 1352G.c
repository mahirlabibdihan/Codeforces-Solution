#include<stdio.h>

int main()
{
    int t,n,i,j,k,a,x,y;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n); k=n%4; a=n/4;

        if(a)
        {  if(k<2)
            { x=2; y=1; while(a--)
                { for(i=x; i<=x+2; i+=2) printf("%d ",i); x=i;

                for(i=y; i<=y+2; i+=2) printf("%d ",i); y=i;  }
                if(k==1) printf("%d",n); printf("\n"); }


           if(k==2)
            { x=n-1; y=n; a++; while(a--)
                { for(i=x; i>=x-2; i-=2) printf("%d ",i); x=i;

                    if(x>3) { for(i=y; i>=y-2; i-=2) printf("%d ",i); y=i; }

                    else { printf("6 2 4 1\n"); break; } } }


            if(k==3) { x=n-1; y=n; while(a--)
                     {  for(i=x; i>=x-2; i-=2) printf("%d ",i); x=i;

                    if(x>4)
                    { for(i=y; i>=y-2; i-=2) printf("%d ",i); y=i; }

                    else { printf("1 3 7 5 2\n"); break; }}}}


        else printf("-1\n");

    }
}
