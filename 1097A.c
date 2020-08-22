#include<stdio.h>
int main()

{
char a[3],b[3];

int c=0,n=5;

scanf("%s",&a);

while(n--)

{
    scanf("%s",&b);

    if(a[0]==b[0]||a[1]==b[1])
        c=1;
}

c?printf("YES"):printf("NO");}
