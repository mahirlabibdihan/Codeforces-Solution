#include<stdio.h>

void merge(int x[],int first,int mid, int last)
{
    int i=first, j=mid+1, k=0, y[last-first+1];

    while(i<=mid&&j<=last)
    {
        if(x[i]<=x[j]) {y[k++]=x[i++];}
        else {y[k++]=x[j++];}

    }

    while(j<=last) y[k++]=x[j++];
    while(i<=mid) y[k++]=x[i++];

    for(i=first,j=0; i<=last;)  x[i++]=y[j++];
}




void sort(int x[],int first,int last)
{
    if(first<last)
    {
        int mid=(first+last)/2;

        sort(x,first,mid);
        sort(x,mid+1,last);
        merge(x,first,mid,last);
    }

}


int main()

{
    int n,i,j,min,k;

    scanf("%d",&n);

    int x[n];

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

    sort(x,0,n-1);

    for(i=0;i<n-2;i++)
    {
        if(x[i]+x[i+1]>x[i+2]){printf("YES"); break;}
    }

    if(i==n-2) printf("NO");
}
