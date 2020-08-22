#include<stdio.h>

int main()

{
    int n,i,p,x[301],y[301]={},a=-1;

    scanf("%d %d",&p,&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);

        x[i]%=p;

        if(y[x[i]]&&a<0) a=i+1;

        y[x[i]]=1;
    }

    printf("%d",a);
}
