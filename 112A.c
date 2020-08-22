#include<stdio.h>

int main()

{
    char a[100],b[100];

    int i,j,x=0,y=0;

    gets(a); gets(b);

    for(i=0;i<strlen(a);i++)
        {
           if(a[i]>96) a[i]=a[i]-32;
           if(b[i]>96) b[i]=b[i]-32;

           if(a[i]>b[i]) {printf("-1"); break;}
           else if(a[i]<b[i])  {printf("1"); break;}

        }

    if(i==strlen(a)) printf("0");
}

