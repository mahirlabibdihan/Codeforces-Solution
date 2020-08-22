#include<stdio.h>

int main()
{
    int m,n,x[13][2]={{0,0},{6,7},{1,0},{6,7},{7,0},{6,7},{7,0},{6,7},{6,7},{7,0},{6,7},{7,0},{6,7}};

    scanf("%d %d",&m,&n);

    if(x[m][0]!=n&&x[m][1]!=n)  printf("5");

    else
    {
        if(m==2) printf("4");
        else printf("6");
    }
}
