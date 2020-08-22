#include<stdio.h>
#include<string.h>

int main()
{
    char x[101];

    gets(x); int a=0,b=0,i,n=strlen(x);

    for(i=0;i<n;i++) {if(x[i]<97) b++; else a++;}

    if(b>a) strupr(x);

    else strlwr(x);

    puts(x);
}

