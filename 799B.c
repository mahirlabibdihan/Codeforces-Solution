#include<stdio.h>

void merge(int x[],int y[],int z[],int l,int m, int h)
{  int i=l, j=m+1, k=l, p[h+1],q[h+1],r[h+1];
    while(i<=m&&j<=h)
    { if(x[i]<=x[j]) {q[k]=y[i]; r[k]=z[i]; p[k++]=x[i++];} else {q[k]=y[j]; r[k]=z[j]; p[k++]=x[j++];}}
    while(j<=h) {q[k]=y[j]; r[k]=z[j]; p[k++]=x[j++];} while(i<=m) {q[k]=y[i]; r[k]=z[i]; p[k++]=x[i++];}
    for(i=l;i<=h;i++)  {y[i]=q[i]; z[i]=r[i]; x[i]=p[i]; }}

void sort(int x[],int y[],int z[],int l,int h)
{    if(l<h) { int m=(l+h)/2;
   sort(x,y,z,l,m);  sort(x,y,z,m+1,h);  merge(x,y,z,l,m,h);} }


int main()
{
   int n,m,i,j;

   scanf("%d",&n);

   int x[n],y[n],z[n];

   for(i=0;i<n;i++) scanf("%d",&x[i]);
   for(i=0;i<n;i++) scanf("%d",&y[i]);
   for(i=0;i<n;i++) scanf("%d",&z[i]);

   sort(x,y,z,0,n-1);

   scanf("%d",&m);

    int w[m];

    for(i=0;i<m;i++) scanf("%d",&w[i]);

    for(i=0;i<m;i++)

    { for(j=0;j<n;j++)
        {if(!x[j]) continue;

        if(w[i]==y[j]||w[i]==z[j])
            {printf("%d ",x[j]); x[j]=0; break;}
        }

        if(j>=n) printf("-1 ");
    }
}






