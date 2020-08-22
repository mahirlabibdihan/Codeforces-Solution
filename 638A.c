#include<stdio.h>
#include<math.h>

int main()

{
    int n,t,i;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        printf("%d\n",pow(2,(n/2)+1)-2);
    }
}
