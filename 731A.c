#include<stdio.h>

int main()

{
    char x[101],y; x[-1]='a';

    int i,c=0;

    gets(x);

    for(i=0;i<strlen(x);i++)
    {
        y=abs(x[i]-x[i-1]);

        if(y<13)  c+=y;

        else c+=26-y;
    }

    printf("%d",c);
}
