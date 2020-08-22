#include<stdio.h>

int main()

{

    int t,i,j;

    scanf("%d",&t);

    char x[9*t][10];

    for(i=0; i<9*t; i++)
        scanf("%s",&x[i][0]);

    for(i=0; i<9*t; i++)
    {

        for(j=0; j<9; j++)
        {
            if(x[i][j]=='9')
            {
                x[i][j]='8';
                break;
            }
        }

        printf("%s\n",x[i]);
    }
}
