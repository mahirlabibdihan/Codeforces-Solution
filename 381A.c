#include<stdio.h>

int main()

{
    int n,i,j,sum=0,s=0,a=0;

    scanf("%d",&n);

    int x[n],b=n-1;

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        sum+=x[i];
    }

    for(i=1;i<=n;i++)
    {
        if(x[a]>=x[b]) {if(i%2) s+=x[a]; a++;}
        else {if(i%2) s+=x[b]; b--;}
    }

    printf("%d %d",s,sum-s);
}

