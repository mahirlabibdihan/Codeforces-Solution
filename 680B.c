#include<stdio.h>

int main()

{
    int n,a,i,j,x[101],c=0;

    scanf("%d %d",&n,&a);

    for(i=0;i<n;i++)
       scanf("%d",&x[i]);

    for(i=a-1,j=a-1;i<n||j>-1;i++,j--)
    {
        if(i<n&&j>-1&&x[i]&&x[j]){ if(i==j)c++; else c+=2;}
        else if(j<0&&x[i])  c++;
        else if(i>n-1&&x[j]) c++;
    }

    printf("%d",c);
}
