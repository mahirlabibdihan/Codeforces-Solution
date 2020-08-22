#include<stdio.h>
#include<string.h>

int main()
{
    int k; char x[1001];

    scanf("%d\n%s",&k,x);

    int n=strlen(x);

    if(n%k) printf("-1");

    else
    {
       int i,m=n/k,z[26]={},j=0,a; char y[m];

       for(i=0;i<n;i++) z[x[i]-97]++;

       for(i=0;i<26;i++) if(z[i]%k) break;
       if(i==26)
       {  for(i=0;i<26;i++)
           {a=z[i]/k; while(a--)  y[j++]=i+97; }

           for(i=0;i<k;i++) for(j=0;j<m;j++) printf("%c",y[j]);
       }
       else printf("-1");
    }
}
