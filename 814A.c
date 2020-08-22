#include<stdio.h>

int main()

{
    int n,m,i,j,k=0,l=0;

    scanf("%d %d",&n,&m);

    int x[n],y[m];

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

    for(i=0;i<m;i++)
        scanf("%d",&y[i]);


        if(m>1) printf("Yes");
        else

        {
            for(i=0;i<n;i++)

                if(!x[i]) x[i]=y[0];

            for(i=1;i<n;i++)
            {
                if(x[i]<x[i-1]) break;
            }

            if(i==n) printf("No");

            else printf("Yes");

        }

}


