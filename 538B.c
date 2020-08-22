#include<stdio.h>
#include<string.h>

int main()
{
    char x[7]; int y[10][7]={};

    gets(x); int n=strlen(x),i,j,a=0,k;

    for(j=0;;j++)
    {
        for(i=0;i<n;i++)
        {
            if(x[i]>'0') {y[j][i]=1; x[i]--;a=1; }

        }

        if(!a) break; a=0;
    }

    printf("%d\n",j);

    for(i=0;i<j;i++)
        {a=0; for(k=0;k<n;k++)
            {if(y[i][k]==1) {a=1;  printf("1");}
            else if(a) printf("0");}
            printf(" ");}

}
