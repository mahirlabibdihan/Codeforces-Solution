#include<stdio.h>
#include<string.h>

int main()
{
    char x[101],y[101];

    gets(x); gets(y);

    int n;

    n=strcmp(y,strrev(x));

    if(n) printf("NO");
    else  printf("YES");
}
