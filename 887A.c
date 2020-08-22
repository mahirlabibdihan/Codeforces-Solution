#include<stdio.h>

int main()

{
    char x[100];

    int c=0,i,j,k=0,l;

    scanf("%s",x);

    l=strlen(x);

    for(i=1;i<l;i++)
    {
       if(x[i]=='0') c++;

       else if(!k&&x[i]=='1') {k=1; j=i;}
    }

    if(c>=6&&x[0]=='1') printf("yes");

    else if(k)
    { c=0;
        for(i=j+1;i<l;i++)
    {
       if(x[i]=='0') c++;
    }
    if(c>=6) printf("yes");
    else printf("no");
    }

    else printf("no");
}
