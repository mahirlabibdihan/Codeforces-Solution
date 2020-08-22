#include<stdio.h>

int main()

{ int n,t,i;

scanf("%d %d",&n,&t);

char x[n];

scanf("%s",&x);

while(t--)
{ for(i=0;i<n;i++)
{
  if(x[i]=='B'&&x[i+1]=='G')
  {
      int a=x[i];
      x[i]=x[i+1];
      x[i+1]=a;

      i++;
  }
}
}
printf("%s",x);
}
