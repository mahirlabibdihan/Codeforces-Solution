#include<stdio.h>
#include<string.h>

int main()
{
    char x[101],y[101],z[101],i;

    int a[100]={},b[100]={};

    gets(x); gets(y); gets(z);

    for(i=0;i<strlen(x);i++) a[x[i]]++;
    for(i=0;i<strlen(y);i++) a[y[i]]++;
    for(i=0;i<strlen(z);i++) b[z[i]]++;

    for(i=0;i<100;i++) if(a[i]!=b[i]) break;
    if(i==100) printf("YES"); else printf("NO");
}

