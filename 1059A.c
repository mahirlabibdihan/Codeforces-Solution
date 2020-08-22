#include<stdio.h>

int main()

{
    int n,s,c,i,j,k;

    scanf("%d %d %d",&n,&s,&k);


    if(!n) c=s/k;

    else{int x[n],y[n];

    for(i=0;i<n;i++)
        scanf("%d %d",&x[i],&y[i]);

    c=x[0]/k;

    for(i=0;i<n-1;i++)
    {
        c=c+((x[i+1]-y[i]-x[i])/k);
    }

    c=(s-x[i]-y[i])/k;}

    printf("%d",c);

}
