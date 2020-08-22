#include<stdio.h>
#include<string.h>

int main()
{
    int t;

    scanf("%d\n",&t);

    while(t--)
    {
        char x[501];  gets(x);

        int n=strlen(x),i,y[26]={},c=1;

        for(i=0;i<n;i++) {if(i<n-1&&x[i]==x[i+1]) c++; else { if(c%2) y[x[i]-97]=1; c=1;}}

        for(i=0;i<26;i++) if(y[i]) printf("%c",i+97); printf("\n");
    }
}
