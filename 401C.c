#include<stdio.h>

int main()
{
    int n,m,i,c;

    scanf("%d %d",&n,&m);

    if(n<m+2&&2*(n+1)>=m)
    {if(n>=m)
        {while(n||m)
           {if(n) {printf("0"); n--;}
            if(m) {printf("1"); m--;}} }

    else
    {c=m-n; {while(n||m)
        {if(c&&m>1) {printf("11"); c--; m-=2;}
        else if(m) {printf("1"); m--;}
        if(n) {printf("0"); n--;} } } } }

    else printf("-1");
}
