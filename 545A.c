#include<stdio.h>

int main()

{
    int n,i,j,c=0;

    scanf("%d",&n);

    int x[n][n],y[n];

    for(i=0;i<n;i++)
    {y[i]=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);

            if(x[i][j]==1) y[i]=1;
            else if(x[i][j]==2) y[j]=1;
            else if(x[i][j]==3) {y[i]=1; y[j]=1;}
        }
    }

    for(i=0;i<n;i++)
       if(!y[i]) c++;

    printf("%d\n",c);

    for(i=0;i<n;i++)
        if(!y[i]) printf("%d ",i+1);


}
