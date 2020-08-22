#include<stdio.h>
#include<string.h>

int main()
{
    char x[101];

    gets(x);

    int y[130]={},i,n=strlen(x),c=0;

    for(i=0;i<n;i++)
       if(!y[x[i]]) {y[x[i]]=1; c++;}

    (c%2)?printf("IGNORE HIM!"):printf("CHAT WITH HER!");

}


