#include<stdio.h>

int main()

{
    char x[100000];
    int i,a=0,b=0;

    scanf("%s",x);

    for(i=1;x[i]!=0;i++)
    {
        if(x[i-1]=='A'&&x[i]=='B')
          {a++;  if(a==1)
          {x[i-1]='s'; x[i]='s';}}

        else if(x[i]=='A'&&x[i-1]=='B')
            { b++;  if(b==1)
        {x[i-1]='s'; x[i]='s';}}


    }

    if(a>1&&!b)
    {
       for(i=1;x[i]!=0;i++)

    {
        if((x[i+1]!='B'||a>2)&&x[i]=='A'&&x[i-1]=='s') {b++; break;}
    }
    }

     else if(b>1&&!a)
    {
       for(i=1;x[i]!=0;i++)

    {
        if((x[i+1]!='A'||b>2)&&x[i]=='B'&&x[i-1]=='s') {a++; break;}
    }
    }


    if(a&&b)  printf("YES");
    else printf("NO");
}
