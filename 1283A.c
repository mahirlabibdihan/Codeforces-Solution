#include<stdio.h>m
int main()
{
    int n,h,m;
    scanf("%d",&n);
    while(n--)
    {
      scanf("%d %d",&h,&m);
      printf("%d\n",1440-(h*60)-m);
    }
}
