#include<stdio.h>
#include<string.h>

int main()
{
  int t,i;

  scanf("%d\n",&t);

  while(t--)
  {
     char x[101];

     gets(x);  int y[26]={},n=strlen(x),a=0;

     for(i=0;i<n;i++)
        y[x[i]-97]++;

     for(i=0;i<26;i++)
        {if(y[i]>1) break;
        if(y[i]==1&&y[i+1]==0) a=1;
        else if(a&&y[i]==0&&y[i+1]==1) break;}

        if(i==26) printf("Yes\n"); else printf("No\n");
   }
}
