#include<stdio.h>

int main()

{   int i,n,m,t,a;

   scanf("%d %d\n",&n,&m);

    char x[n][11],y[m][11];

    for(i=0;i<n;i++)
        gets(x[i]);

    for(i=0;i<m;i++)
        gets(y[i]);

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&a);

        printf("%s%s\n",x[(a-1)%n],y[(a-1)%m]);

    }
}















