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
    int t,n,i,j,min,k,c,h,max;

    scanf("%d",&t);

    while(t--)
    { scanf("%d",&n);

    int x[n],y[n];

    for(i=0;i<n;i++)
        {scanf("%d",&x[i]);
        y[i]=1;}


    sort(x,0,n-1);
        max=y[0];

    c=1; h=0;
     for(j=0;j<n-1;j++)
     {
        if(x[j]!=x[j+1]) {c++; h++;}

           else {y[h]++;}


             if(max<y[h]) max=y[h];

        }

if(c>max) printf("%d\n",max);

else if(c==max) printf("%d\n",c-1);

    else printf("%d\n",c);
    }}
