#include<stdio.h>
#include<string.h>

int main()
{
    char x[101];

    gets(x);  int n=strlen(x),i,j;

    for (j=0;j<n-1;j+=2)
      for (i=0;i<n-1-j;i+=2)
        if (x[i]>x[i+2])
            {int k=x[i]; x[i]=x[i+2]; x[i+2]=k;}

    puts(x);
}
