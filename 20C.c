#include<stdio.h>

int main()

{
    int n,m,i,j,k,min,sum=0,a,b=1,c=1;

    scanf("%d %d",&n,&m);

    int x[m],y[m],z[m],w[m];

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

    a=1;j=1; w[0]=1;
    while(a!=n)
     {
         for(i=0;i<m;i++)
         {
             if(x[i]==a) {w[j++]=y[i]; a=y[i]; x[i]=0; y[i]=0; z[i]=0; b=0; break;}
            else if(y[i]==a) {w[j++]=x[i]; a=x[i]; x[i]=0; y[i]=0; z[i]=0; b=0; break;}
         }

     if(m&&b) {printf("-1"); c=0; break; } b=1;
     }

     if(c&&m)
     {
         for(i=0;i<j;i++)
            printf("%d ",w[i]);

     }



}
