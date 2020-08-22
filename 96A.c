#include<stdio.h>
#include<string.h>

int main()
{
    char x[101],i,c=1;

    gets(x);

    for(i=0;i<strlen(x)-1;i++)
        {if(x[i]==x[i+1]) c++; else c=1;
        if(c>6) break;}
    if(i==strlen(x)-1)  printf("NO");
    else printf("YES");
}
