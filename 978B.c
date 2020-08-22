#include<stdio.h>

int main()

{
    int n,i,j,b=0,c=0;

    scanf("%d",&n);

    char x[n];

    scanf("%s",x);

    for(i=0;i<n;i++)
    {
        if(x[i]=='x')
            {
                b++;

                if(b==3)
                {
                   c++;

                   for(j=i+1;x[j]=='x';j++)  c++;

                   i=j-1;
                }
            }

        else  b=0;
    }

    printf("%d",c);
}
