#include<stdio.h>
#include<string.h>


int main()

{
    int p,q,r;

    int a,b,c,d,i,j;

    scanf("%d %d",&p,&q);

    r=p+q;

    int x[11]={},y[11]={},z[11]={};

    for(i=10;p>0;i--)
    {
        x[i]=p%10;
        p/=10;
    }
    a=i+1;

      for(i=10;q>0;i--)
    {
        y[i]=q%10;
        q/=10;
    }
    b=i+1;

      for(i=10;r>0;i--)
    {
        z[i]=r%10;
        r/=10;
    }
    c=i+1;

    d=(a>b)?a:b;


   for(i=d;i<11;i++)
    { if(x[i]&&y[i]&&!z[i]) break;

      if(!x[i]&&!y[i]&&z[i]) break;

      if((!x[i]&&y[i])||(x[i]&&!y[i])) break;

    }

    if(i<11) printf("NO");
    else
    {
        for(i=d-1;i>=c;i--)
        {
            if(a!=b&&!x[i]&&!y[i]&&z[i]) break;
        }

        if(i<c) printf("YES");
        else printf("NO");
    }

}





