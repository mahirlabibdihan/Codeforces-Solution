#include<stdio.h>

int main()

{
    int a[4],b,c,i;

    for(i=0;i<4;i++)
    scanf("%d",&a[i]);

    b=a[0];

    for(i=1;i<4;i++)
    {
      if(i!=1&&a[i]<b) b=a[i];
    }

    c=(a[1]<a[0]-b)?a[1]:a[0]-b;

    printf("%d",b*256+c*32);


}
