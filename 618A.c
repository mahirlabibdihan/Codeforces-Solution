#include<stdio.h>
#include<math.h>

int main()

{
    int n,j,i;

    scanf("%d",&n);

    for(j=0;pow(2,j)<=n;j++);

    for(i=j;n;i--)
    {
        if(n>=pow(2,i))
        {
            n-=pow(2,i);
            printf("%d ",i+1);
        }
    }
}
