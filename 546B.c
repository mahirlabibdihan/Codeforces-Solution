#include<stdio.h>

int main()

{
    int x[3001],y[3001]={},n,sum=0,a=0,b,i,c;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        y[x[i]]++;
    }

    for(i=1;i<=n;i++)
    {
        if(!a&&y[i]>1) {a=y[i]-1; b=i;}

        if(a&&!y[i]) {y[i]++; y[b]--; sum+=i-b; a--; if(!a) i=b;}

    }

    if(a)
    {a=0; c=n+1;
        for(i=b;i<=n;i++)
        {
            if(!a&&y[i]>1) {a=y[i]-1; b=i;}

            while(a)
             {sum+=(c-b); a--; c++;}

        }
    }

    printf("%d",sum);

}
