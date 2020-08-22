#include<stdio.h>

int main()

{
    int n,i,j,k,min;

    scanf("%d",&n);

    int x[n];

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

    min=(x[n-1]>x[0])?x[n-1]-x[0]:x[0]-x[n-1];
    j=0;
    for(i=1;i<n;i++)
    {
        k=(x[i]>x[i-1])?x[i]-x[i-1]:x[i-1]-x[i];

        if(min>k) {min=k; j=i;}

    }

    if(j)  printf("%d %d",j,j+1);
    else printf("1 %d",n);
}
