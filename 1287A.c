#include<stdio.h>

int main()

{
    int t,n,i,j;

    scanf("%d",&t);

    while(t--)
    {   int c=0;
        scanf("%d",&n);

        char x[n];

        scanf("%s",x);
        for(j=0;;j++)
        {for(i=0;i<n-1;i++)
        {
          if(x[i]=='A'&&x[i+1]=='P') {x[i+1]='A'; c=1;  i++;}
        }

        if(c) c=0;
        else break;
    }
    printf("%d\n",j);
}

}
