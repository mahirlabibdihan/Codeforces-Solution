#include<stdio.h>

int main()
{
    int n,c=0,i;   char x[65001];

    scanf("%d %s",&n,x);

    for(i=0;i<n;i++) if(!(x[i]%2)) c+=i+1;

    printf("%d",c);
}
