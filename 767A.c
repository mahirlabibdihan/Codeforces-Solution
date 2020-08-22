#include<stdio.h>

int main()

{
    int n,i,j,a;

    scanf("%d",&n);

    int x[n],y[n+1]; y[n]=0;

    for(i=0; i<n; i++)
        {scanf("%d",&x[i]);
        y[i]=0;}

    a=n;

        for(i=0; i<n; i++)
        {

            if(x[i]==a)
            {

                printf("%d ",a);  a--;


                for(j=a;j>=n-i;j--)
                {
                    if(y[j]) printf("%d ",j);
                    else break;
                }

                 a=j;
                printf("\n");
            }

            else
            {  printf("\n");
                y[x[i]]=1;  }

        }
}
