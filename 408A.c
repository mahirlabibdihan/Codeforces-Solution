#include <stdio.h>

int main()
{
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif

int n,i,j,k,min=100000;

scanf("%d",&n);

int x[n],sum;

for(i=0;i<n;i++)
   scanf("%d",&x[i]);

for(i=0;i<n;i++)
{sum=0;
    for(j=0;j<x[i];j++)
    {
        scanf("%d",&k);

        sum+=k*5;

    }
sum+=x[i]*15;
	if(min>sum) min=sum;
}
printf("%d",min);

}