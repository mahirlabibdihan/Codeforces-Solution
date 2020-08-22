#include<stdio.h>

int main()
{
    int t,n,i,j;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        int a[n],b[n];

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        for(i=0;i<n;i++)
            scanf("%d",&b[i]);



        if(a[0]!=b[0]) printf("NO\n");


        else
        {
            for(j=n-1;j>0;j--)
            {


                if(a[j]!=b[j])
                {for(i=j-1;i>=0;i--)
                {


                    if(a[i]&&(b[j]-a[j])/a[i]>0&&(b[j]-a[j])%a[i]==0) { a[j]=b[j];  break;}


                }

                if(i<0) break;
                }
            }


            if(j==0) printf("YES\n");
            else printf("NO\n");



        }
    }
}
