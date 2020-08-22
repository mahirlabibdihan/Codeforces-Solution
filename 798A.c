#include<stdio.h>
#include<string.h>

int main()
{
    char x[16]; gets(x);

    int i,c=0,n=strlen(x),a=n/2,j;

    if(n%2) j=a+1; else j=a;

    for(i=a-1;j<n;j++,i--)
        if(x[i]!=x[j]) c++;

    if(c==1||(c<2)&&n%2) printf("YES"); else printf("NO");
}
