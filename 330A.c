#include<stdio.h>

int main()

{
    int a,b,i,j,n=1,p=0,q=0;

    scanf("%d %d",&a,&b);

    char x[a][b],y[a*b],z[a*b];y[0]=-1;

    for(i=0;i<a;i++)
        scanf("%s",&x[i][0]);

    for(i=0;i<a;i++)
        for(j=0;j<b;j++)
            if(x[i][j]=='S') {y[n]=i; z[n++]=j;}

    for(i=0;i<n-1;i++)
        if(y[i]!=y[i+1]) p++;

    for(j=0;j<b;j++)
      {for(i=1;i<n;i++)
        if(z[i]==j) {q++; break;}}

        printf("%d",a*b-p*q);
}
