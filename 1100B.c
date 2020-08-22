#include<stdio.h>

int main()

{
    int n,m,i,j,y[100001]={},x[100001],c=0;

    scanf("%d %d",&n,&m);

    for(i=0; i<m; i++)
        {scanf("%d",&x[i]);

        if(!y[x[i]]) c++;  y[x[i]]++;

        if(c==n)
        {for(j=1; j<=n; j++)

            if(!y[j]) break;

        if(j>n)
        {
            x[i]=1;
            for(j=1;j<=n;j++)
             {y[j]--; if(!y[j]) c--;}
        }
        else x[i]=0;
        }

        else x[i]=0;
        }

        for(i=0;i<m;i++)
            printf("%d",x[i]);
}
