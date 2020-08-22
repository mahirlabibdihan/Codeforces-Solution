#include<stdio.h>

int main()

{
    int t,n,i,j,k,min,c;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        int a[n],b[n];

        for(i=0;i<n;i++)
            scanf("%d %d",&a[i],&b[i]);

        min=0;
        for(i=0;i<n;i++)
        {
          if(a[i]<a[0]&&b[i]>=a[i+1])   min=i;
        }
        c=0;

        c=c+a[min];

        for(j=min+2;;j++)
        {
            if(j>=n) j=0;

            if(j==min) break;

            if(!j&&a[j]>b[n-1]) c=c+a[j]-b[n-1];
            else if(j&&a[j]>b[j-1])  c=c+a[j]-b[j-1];
        }

        printf("%d\n",c);
    }
}
