#include <stdio.h>
int main()
{
    int a[1000], X, max, i, min;
    scanf("%d", &X);
    for (i = 0; i < X; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    for (i = 1; i < X; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    min = a[0];
    for (i = 1; i < X; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    int sum = 0;
    for (i = 1; i < X; i++)
    {
        sum = sum + a[i];
    }
    printf("max %d\n", max);
    printf("min %d\n", min);
    printf("sum %d", sum);
    return 0;
}