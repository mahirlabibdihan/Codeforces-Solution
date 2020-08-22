#include<stdio.h>

int main()

{
    int n,m,k,i,j;

    scanf("%d %d %d",&n,&m,&k);

    int x[m+1],y[m+1];

    for(i=0;i<m+1;i++)
        scanf("%d",&x[i]);

    if(n==k) printf("%d",m);

    else
    {
        for(i=1;pow(2,i)-1<=x[m]&&i<=n;i++);

        printf("%d",i);

    }

}
