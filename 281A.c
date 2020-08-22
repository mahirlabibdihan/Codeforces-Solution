#include<stdio.h>
#include<ctype.h>

int main()
{  char x[1001]; gets(x); x[0]=toupper(x[0]); puts(x); }
