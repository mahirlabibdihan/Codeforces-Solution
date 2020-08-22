#include<stdio.h>

int main()

{
    int n,i,j,a=0,b=0,c=0,p=0,q=0;

    scanf("%d",&n);

    int x[n],y[200001]={},z[200001]={};

    for(i=0;i<n;i++)
    {scanf("%d",&x[i]);
    if(!y[x[i]]) {a++; y[x[i]]=1; if(x[i]>p) p=x[i];}
    else if(!z[x[i]]) {b++; z[x[i]]=1;  if(x[i]>q) q=x[i]; }
    else c=1;}

    if(c) printf("NO");

    else
    {
        printf("YES");

        printf("\n%d\n",b);

        for(i=0;i<=q&&b;i++)
           if(z[i]) {b--; printf("%d ",i);}

        printf("\n%d\n",a);
        for(i=p;i>-1&&a;i--)
           if(y[i]) {a--; printf("%d ",i);}

    }

}
