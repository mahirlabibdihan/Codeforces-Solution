#include<stdio.h>

int main()

{
    int n,i,k,max;

    scanf("%d",&n);

    int x[n+1],j[n];
    x[0]=-1;
    j[0]=0;
    k=0;
    {
        for(i=1;i<=n;i++)
    {
        scanf("%d",&x[i]);


        if(x[i]>x[i-1]) j[k]++;

        else {k++; j[k]=1;}
    }


}





max=j[0];

for(i=1;i<=k;i++)
{
    if(j[i]>max) max=j[i];

}


printf("%d\n",max);

}
