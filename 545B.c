#include<stdio.h>
#include<string.h>

int main()

{
    long long int i,j=0,c=0,n;

    char x[100001],y[100001];

    scanf("%s %s",x,y);

    n=strlen(x);

    for(i=0;i<n;i++)
    if(x[i]!=y[i]) c++;

    if(c%2) printf("impossible");

    else
    {c/=2;
        for(i=0;i<n;i++)
        {
            if(x[i]==y[i]) printf("%c",x[i]);

            else
                {j++; if(j<=c) printf("%c",x[i]);
            else printf("%c",y[i]);}
        }
    }



}
