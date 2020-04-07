#include<stdio.h>

int main()

{
    int n,i,j,a=0,b=0,c,d,e=0,f=0;

    scanf("%d",&n);

    int x[n][2];

    for(i=0; i<n; i++)
        scanf("%d %d",&x[i][0],&x[i][1]);

    for(i=0; i<n; i++)
    {
        a=a+x[i][0];
        b=b+x[i][1];
    }

    c=(a%2)?1:0;
    d=(b%2)?1:0;

    if(!c&&!d) printf("0");

    else if(c&&d)
    {
        if(n==1) printf("-1");

        else
        {
            for(i=0; i<n; i++)
            {
                if(!(x[i][0]%2)) break;
            }

            e=(i==n)?1:0;

            for(i=0; i<n; i++)
            {
                if(!(x[i][1]%2)) break;
            }

            f=(i==n)?1:0;

         if(e&&f) printf("-1");

         else if((e&&!f)||(!e&&f)) printf("1");

         else
         {
             for(i=0;i<n;i++)
             {
                 if((x[i][0]%2&&!(x[i][1]%2))||(x[i][1]%2&&!(x[i][0]%2))) break;
             }

             (i==n)?printf("-1"):printf("1");
         }
        }
    }

else  printf("-1");

}

