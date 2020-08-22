#include<stdio.h>

int main()

{
    int n,k,i,a,c=0;

    scanf("%d %d",&n,&k);

    int x[n];


    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

    a=x[k-1];

    for(i=0;i<n;i++)
    {
        if(x[i]&&x[i]>=a)
            c++;
    }

printf("%d\n",c);

}
