#include<stdio.h>

int main()

{
    int n,m,c=0;

    scanf("%d %d",&n,&m);

    while(n>0&&m>0)
    {
        if(n>m) {n-=2; m-=1;}
    else {m-=2; n-=1;}

    if(n>=0&&m>=0) c++;
    }
       printf("%d",c);
}
