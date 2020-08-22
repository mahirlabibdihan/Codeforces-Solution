#include<stdio.h>

int main()

{int n,i,j,max;

scanf("%d",&n);

int b[n],a[n];

for(i=0;i<n;i++)
    scanf("%d",&b[i]);

a[0]=b[0];
max=a[0];

for(i=1;i<n;i++)


{
if(a[i-1]>max)
    max=a[i-1];

a[i]=b[i]+max;

}

for(i=0;i<n;i++)
    printf("%d ",a[i]);

}
