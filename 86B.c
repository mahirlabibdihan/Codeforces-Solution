#include<stdio.h>
#include<string.h>

int main()

{
    int t,n,i,j;

    scanf("%d",&t);

    while(t--)
    {
        char x[101];

        scanf("%s",x);

        n=strlen(x);

        for(i=1; i<n; i++)
         if(x[i]!=x[0]) break;

        if(i==n) printf("%s\n",x);

        else
        {
            for(i=0; i<n-1; i++)
            if(x[i]==x[i+1]) break;

            if(i==n-1) printf("%s\n",x);

            else
            {
                for(i=0; i<n-1; i++)
                {
                    if(x[i]!=x[i+1])
                      printf("%c",x[i]);

                    else
                    {
                        if(x[i]=='1') printf("%c0",x[i]);
                        else printf("%c1",x[i]);
                    }
                }
                printf("%c\n",x[i]);
            }
        }
    }
}
