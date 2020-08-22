#include<stdio.h>

int main()

{
    int n,t,i,j;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        int x[n][2];

        for(i=0;i<n;i++)
            scanf("%d %d",&x[i][0],&x[i][1]);

        for(i=1;i<n;i++)
        {
           if((x[i][0]<x[i-1][0])||(x[i][1]<x[i-1][1])) break;
           if((x[i][1]-x[i-1][1])>(x[i][0]-x[i-1][0])) break;
        }

        if(i<n) printf("NO\n");
        else{
            for(i=0;i<n;i++)

            {
                if(x[i][1]>x[i][0])  break;
            }
            if(i<n) printf("NO\n");

            else printf("YES\n");
        }
    }

}
