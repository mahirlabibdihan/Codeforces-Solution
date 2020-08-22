#include<stdio.h>

int main()

{
    int t,n,m,k,i,j;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d",&n,&m,&k);



        for(i=0,j=0;j<n;j++,i++)
        {
            printf("%c",'a'+i);

            if(i==k-1) i=-1;
        }

        printf("\n");
    }
}
