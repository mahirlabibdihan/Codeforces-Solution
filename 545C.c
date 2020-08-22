#include<stdio.h>

int main()

{
    int n,i,c;

    scanf("%d",&n);

    c=n;

    int x[n],y[n];

    for(i=0;i<n;i++)
      scanf("%d %d",&x[i],&y[i]);

      if(n>2) c=2;

    for(i=1;i<n-1;i++)
    {
        if(y[i]<x[i]-x[i-1]) c++;

        else if(y[i]<x[i+1]-x[i]) {c++; x[i]+=y[i];}
    }

    printf("%d",c);
}
