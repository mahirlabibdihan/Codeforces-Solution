#include<stdio.h>

int main()

{
    int a,n;
    char x[1000];
    scanf("%d",&n);

    while(n--)
    {
        gets(x);

        a=strlen(x)-1;

        if(x[a]=='o') printf("FILIPINO\n");
        else if(x[a]=='a') printf("KOREAN\n");
        else printf("IAPANESE\n");

    }
}
