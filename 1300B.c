#include<stdio.h>

void merge(int x[],int l,int m, int h)
{  int i=l, j=m+1, k=l, y[h+1];
    while(i<=m&&j<=h)
    { if(x[i]<=x[j]) y[k++]=x[i++]; else y[k++]=x[j++];}
    while(j<=h) y[k++]=x[j++]; while(i<=m) y[k++]=x[i++];
    for(i=l;i<=h;i++)  x[i]=y[i]; }

void sort(int x[],int l,int h)
{    if(l<h) { int m=(l+h)/2;
   sort(x,l,m);  sort(x,m+1,h);  merge(x,l,m,h);} }

int main()
{
    int t,n,i,a,b,c;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        int x[2*n];

        for(i=0;i<2*n;i++)
            scanf("%d",&x[i]);

        sort(x,0,(2*n)-1);

        printf("%d\n",x[n]-x[n-1]);
    }
}

