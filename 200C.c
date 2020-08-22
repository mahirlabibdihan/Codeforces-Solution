#include<stdio.h>

int main()

{
    int n,m,i,j,k,min,sum=0,a;

    scanf("%d %d",&n,&m);

    int x[m],y[m],z[m];

    for(i=0; i<m; i++)
        scanf("%d %d %d",&x[i],&y[i],&z[i]);

    for(j=0; j<m; j++)
    {
        min=j;
        for(i=j+1; i<m; i++)   if(z[i]<z[min])  min=i;
        if(min!=j)
        {
            k=x[j];
            x[j]=x[min];
            x[min]=k;
            k=y[j];
            y[j]=y[min];
            y[min]=k;
            k=z[j];
            z[j]=z[min];
            z[min]=k;
        }
    }

    a=1;
    while(a!=n)
     {
         for(i=0;i<m;i++)
         {
             if(x[i]==a) {printf("%d ",x[i]); a=y[i]; break;}
         }
     }


}
