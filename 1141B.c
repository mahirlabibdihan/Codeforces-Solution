#include<stdio.h>

int main()

{
    int n,i,j=0,max,a=0;

    scanf("%d",&n);

    int x[n],y[n+1];

    for(i=0;i<n;i++)
        {scanf("%d",&x[i]);
        y[i]=0;}

    for(i=0;i<n;i++)
    {
        if(x[i]==1&&x[i+1]==1) {y[j]++; a=0;}
        else if(x[i]) {  y[j]++; a=1; }
        else if(!x[i]) { a=1;}

     if(a) j++;
    }

    if(x[0]==1&&x[n-1]==1) y[n]=y[0]+y[j-1];
    else y[n]=0;

    max=y[0];
    for(i=1;i<n+1;i++){
        if(y[i]>max) max=y[i];}

    printf("%d",max);

}
