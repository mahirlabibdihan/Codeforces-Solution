#include<stdio.h>

int main()

{
    int n,i,j,c=0,sum=0,a=0;

    scanf("%d",&n);

    int x[n];

    for(i=0;i<n;i++)
       {
        scanf("%d",&x[i]);

        if(x[i]<0) {sum+=x[i]; a=1;}
        else {if(a&&sum<0) { c+=(-1*sum); sum=0;} sum+=x[i]; a=0;}
       }

    if(a&&sum<0) c+=(-1*sum);

    printf("%d",c);

}
