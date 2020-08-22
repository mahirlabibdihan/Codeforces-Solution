#include<stdio.h>

int main()

{
    int n,x[51],y[1001]= {},i,k,max,j;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {scanf("%d",&x[i]);
        y[x[i]]=i;}

    for(j=1; j<1001; j++)
    {
        max=j; for(i=j+1; i<1001; i++) if(y[i]>y[max]) max=i;
        if(max!=j) { k=y[j]; y[j]=y[max]; y[max]=k;
    }

        if(!y[j]) break;
    }

    printf("%d\n",j-1);
for(i=j-1;i>0; i--)
       printf("%d ",x[y[i]]);

}
