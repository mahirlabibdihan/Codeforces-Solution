#include <stdio.h>

int main()
{

int n,i,j,a=1; char x[2001];

 scanf("%d %s",&n,x);

 if(n<3) printf("%s",x);

 else
{for(i=n-2;i<n;)
{
    printf("%c",x[i]);

  if(a&&(!i||i==1)) {i=(-1*i)-1; a=0; }

  if(a) i-=2; else i+=2;
}
}
}


