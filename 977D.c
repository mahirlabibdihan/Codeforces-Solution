#include<stdio.h>

void sort(long long int x[],long long int n)
{ long long int i, j,k;
    for (j=0;j<n-1;j++) for (i=0;i<n-1-j;i++) if (x[i]>x[i+1]) { k=x[i]; x[i]=x[i+1]; x[i+1]=k;}}

int main()
{
    long long int n,i,j,a=0,k,b=0;

    scanf("%lld",&n);

    long long int x[n],y[n-1][2],z[n];

    for(i=0;i<n;i++) {scanf("%lld",&x[i]); z[i]=0;}

    sort(x,n);

    for(j=0;j<n;j++)
        for(i=j+1;i<n;i++)
            if(!(x[i]%x[j]))
            {   if(x[i]/x[j]==2)  {y[a][0]=x[j]; y[a++][1]=x[i];  z[i]++;}
                else if(x[i]/x[j]==3)  {y[a][0]=x[i]; y[a++][1]=x[j]; z[j]++; }}

    for(i=0;i<=n;i++)  if(!z[i]) {z[b]=x[i]; break;}

    for(j=0;j<n-1;j++)
        if(y[j][0]==z[b]) {z[++b]=y[j][1]; break;}

    while(b<n-1)
       for(i=0;i<n-1;i++)
           if(y[i][0]==z[b])
                z[++b]=y[i][1];

    for(i=0;i<n;i++) printf("%lld ",z[i]);
}






