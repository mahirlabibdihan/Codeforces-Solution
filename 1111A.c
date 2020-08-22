#include<stdio.h>
#include<string.h>

int voco(char x){int i=0; if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') i=1;return i;}

int main()
{
    char x[1001],y[1001];
    gets(x); gets(y);
    int i,n=strlen(x);
    for(i=0;i<n;i++)
    if(voco(x[i])!=voco(y[i])||y[i]=='\0')  break;
    if(i==n&&y[i]=='\0') printf("Yes");
    else printf("No");
}
