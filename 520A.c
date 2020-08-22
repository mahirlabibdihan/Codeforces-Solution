#include<stdio.h>
#include<string.h>
#include<ctype.h>

void toup(char x[],int n){int i;for(i=0;i<n;i++) x[i]=toupper(x[i]);}

int main()
{
    int n,y[97]={},c=0,i; char x[201];

    scanf("%d\n%s",&n,x);

    toup(x,n);

    for(i=0;i<n;i++)
    if(!y[x[i]]) {y[x[i]]=1; c++;}

    if(c==26) printf("YES");
    else printf("NO");
}


