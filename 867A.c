
#include<stdio.h>
int main()

{ int n,i,a=0,b=0;
scanf("%d",&n);

char c[n];

scanf("%s",&c);


for(i=0;i<n;i++)

{
    if(c[i]=='S'&&c[i+1]=='F')
        a=a+1;

    else if(c[i]=='F'&&c[i+1]=='S')
        b=b+1;
}


if(a>b)
    printf("YES");

    else
        printf("N0");



return 0;}
