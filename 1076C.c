#include<stdio.h>
#include<math.h>

int main()

{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        float a;

        scanf("%f",&a);

        if(!a||a>3)
        {
            printf("Y %.9f %.9f\n",(a+sqrt(a*(a-4)))/2,(a-sqrt(a*(a-4)))/2);
        }
        else printf("N\n");
    }
}
