#include<stdio.h>

int main()

{
    int n,i,j,y=0;

    scanf("%d",&n);

    char x[n][3];

    for(i=0;i<n;i++)
        scanf("%s",&x[i][0]);

    for(i=0;i<n;i++)
    {
        if(x[i][1]=='+') y++;
        else  y--;
    }

    printf("%d",y);
}
