#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int t,n;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        int x[n],a=0,b=0,c=0,d=0,p=0,q=n-1,s=0,i;

        for(i=0;i<n;i++)
            scanf("%d",&x[i]);

        while(p<=q)
        { c=0; for(i=p;c<=d&&i<=q;i++) c+=x[i]; p=i; s++; a+=c;

        if(p>q) break;

          d=0; for(i=q;d<=c&&i>=p;i--) d+=x[i]; q=i; s++; b+=d;
        }

        printf("%d %d %d\n",s,a,b);
    }
}
