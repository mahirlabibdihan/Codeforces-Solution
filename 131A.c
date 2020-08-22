#include<stdio.h>

int main()

{
    char x[100];
    int i,j,k;

    scanf("%s",x);

    k=strlen(x);

    for(i=1;i<k;i++)
    {
        if (x[i]<97) ;
        else break;
    }

    if(i==k)
    {
        if(x[0]<97) x[0]+=32;

        else x[0]-=32;

        for(i=1;i<k;i++)
            x[i]+=32;
    }

    printf("%s",x);
}
