#include<stdio.h>

int main()

{
    int t,n,m,i,j,k,a,c=0;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);

        int x[n],y[m];

        for(i=0;i<n;i++)
            scanf("%d",&x[i]);

        for(i=0;i<m;i++)
            scanf("%d",&y[i]);


        for(j=n;j>0;j--)
        {
            for(i=0;i<j;i++)
            {
                if(x[i]>x[i+1])
                {
                    k=x[i]; x[i]=x[i+1]; x[i+1]=k;

                    for(k=0;k<m;k++)
                    {
                        if(i+1==y[k])  break;
                    }

                    if(k==m) break;
                }
            }

            if(i<j) break;
        }

        if(j==0) printf("YES\n");
        else printf("NO\n");

    }
}
