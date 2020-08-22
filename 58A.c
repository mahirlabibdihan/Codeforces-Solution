#include<stdio.h>
#include<string.h>
int main()
{
    char x[6]="hello",y[101];

    gets(y);

    int j=0,i,n=strlen(y);

    for(i=0;i<n&&j<5;i++)
        if(y[i]==x[j]) j++;
        if(j==5) printf("YES");
        else printf("NO");
}
