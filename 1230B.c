#include<stdio.h>

int main()

{
    int i,n,k; char x[200001];

    scanf("%d %d %s",&n,&k,x);

    if(n==1)
        {if(k)   printf("0");
        else printf("%s",x);}

    else
    {for(i=0;i<n&&k;i++)
      { if(!i) {if(x[i]>49) {x[i]=49; k--;}}

        else if(x[i]>48) {x[i]=48; k--;}   }

    printf("%s\n",x);}
}
