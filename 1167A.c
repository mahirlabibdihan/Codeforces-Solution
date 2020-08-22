#include<stdio.h>

int main()
{
    int t,n,c,i;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d\n",&n);

        char x[n];   gets(x);

        for(i=0;i<n;i++)
        {
            if(x[i]=='8')
            {  if(n-i>10) {printf("YES\n"); break;}  }
        }
        if(i==n) printf("NO\n");
    }
}
