#include<stdio.h>

int main()

{
    int n,m,r,i,j,k,max,min;

    scanf("%d %d %d",&n,&m,&r);

    int a[n],b[m];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<m;i++)
        scanf("%d",&b[i]);

    min=a[0];
     for(i=1;i<n;i++)
    {
        if(min>a[i])

            min=a[i];
    }

     max=b[0];
     for(i=1;i<m;i++)
    {
        if(max<b[i])

            max=b[i];
    }

    if(min<max)  printf("%d",r-(min*(r/min))+(max*(r/min)));
    else printf("%d",r);


}
