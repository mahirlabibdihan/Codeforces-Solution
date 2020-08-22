#include<stdio.h>
#include<stdlib.h>

void merge(long long int x[],long long int l,long long int m,long long int h) { long long int i=l, j=m+1, k=l, y[h+1]; while(i<=m&&j<=h){ if(x[i]<=x[j]) y[k++]=x[i++]; else y[k++]=x[j++];}while(j<=h) y[k++]=x[j++]; while(i<=m) y[k++]=x[i++];for(i=l;i<=h;i++)  x[i]=y[i]; }

void sort(long long int x[],long long int l,long long int h){ if(l<h) { long long int m=(l+h)/2; sort(x,l,m);  sort(x,m+1,h);  merge(x,l,m,h);} }

int main()
{
    long long int n,i,sum=0;

    scanf("%lld",&n);

    long long int x[n];

    for(i=0; i<n; i++) scanf("%lld",&x[i]);

    sort(x,0,n-1);

    for(i=0;i<n;i++) sum+=abs(i+1-x[i]);

    printf("%lld",sum);
}
