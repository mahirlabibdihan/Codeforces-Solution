#include<stdio.h>
#include<math.h>

int main()
{
    double n,i,j,sum=0;

    scanf("%lf",&n);

    for(j=1;n>=pow(10,j);j++);
    for(i=1;i<j;i++)
      { sum+=9*i*pow(10,i-1); n-=9*pow(10,i-1);}
        sum+=n*j;

      printf("%0.0lf",sum);
}
