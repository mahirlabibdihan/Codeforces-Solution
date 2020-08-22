#include<stdio.h>

int main()

{
    int n,i,s=0,x[100001];

    scanf("%d",&n);

    for(i=0;i<n;i++)
        {scanf("%d",&x[i]);
        if(x[i]>x[s]) s=i;}

        printf("%d",x[s]);
}
