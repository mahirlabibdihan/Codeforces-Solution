#include<stdio.h>

int main()
{
    int n,i,c=0;

    scanf("%d\n",&n);

    char x[n];  gets(x);

    for(i=0;i<n;i+=2)
    if(x[i]+x[i+1]!=195) {c++; if(x[i]=='a') x[i]++; else x[i]--; }

    printf("%d\n%s",c,x);
}
