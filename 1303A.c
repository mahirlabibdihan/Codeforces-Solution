#include<stdio.h>
#include<string.h>
int main()
{
    char x[101]; int t,i,n,c,a,b;

    scanf("%d\n",&t);

    while(t--)
    {
        gets(x);  c=0; a=-1; b=-1;

        n=strlen(x);

        for(i=0;i<n;i++)
        {
           if(x[i]=='1'&&x[i+1]=='0') a=i;

            if(a>-1&&x[i]=='0'&&x[i+1]=='1') b=i;

            if(a>-1&&b>-1){c+=b-a; a=-1; b=-1;}
        }

        printf("%d\n",c);
    }
}
