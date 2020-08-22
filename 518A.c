#include<stdio.h>
#include<string.h>

int main()

{
  char x[101],y[101],a=0,b=0;
  gets(x);  gets(y);
  int i,n=strlen(x);

  for(i=0;i<n;i++)
    {if(y[i]>x[i]) a=1;
        if(y[i]>x[i]+1||(a&&x[i]>=y[i]&&x[i]<'z')) {x[i]++; break;}
    else if(a&&x[i]>y[i]&&y[i]>'a') {y[i]--; b=1;  break;}}

    a=0;
    if(i==n)
    {
       for(i=0;i<n;i++)
       {
           if(!a&&y[i]>x[i]) {a=1; x[i]++;}
           else if(a&&x[i]>=y[i]&&y[i]>'a') {x[i]='a'; break;}
           else if(a&&x[i]<y[i]) break;
       }

       if(i==n) printf("No such string");
       else puts(x);

    }
    else if(b) puts(y);
    else puts(x);
}
