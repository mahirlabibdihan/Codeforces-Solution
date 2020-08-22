#include<stdio.h>
#include<string.h>

int main()

{
    char x[100002];

    gets(x);

    int n=strlen(x),i,j=-1,k;

    for(i=0;i<n-1;i++)
    if(!(x[i]%2)){ j=i; if(x[i]<=x[n-1]) {k=x[i]; x[i]=x[n-1]; x[n-1]=k;  puts(x); break;}}

    if(i==n-1){if(j>-1) {k=x[j]; x[j]=x[n-1]; x[n-1]=k;  puts(x);}

               else printf("-1");}
}
