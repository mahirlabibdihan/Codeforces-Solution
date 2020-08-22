#include<stdio.h>

int main()
{
  int t,n,a,b,c,max;

  scanf("%d",&t);

  while(t--)
  {
     scanf("%d %d %d %d",&a,&b,&c,&n);

     max=a; if(b>max) max=b; if(c>max) max=c; n+=a+b+c;

     if(!(n%3)&&n/3>=max)  printf("YES\n");  else printf("NO\n");
  }
}
