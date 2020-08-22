#include<stdio.h>
#include<string.h>

int main()

{
    int i,a=0,n;

    char x[100002];

    gets(x);

    n=strlen(x);

    for(i=0;i<n;i++)
        {
            if(a&&x[i]=='a') break;
           else if(x[i]>'a'){x[i]-=1; a=1;}

           if(!a&&i==n-1) x[i]='z';

        }

    puts(x);
}
