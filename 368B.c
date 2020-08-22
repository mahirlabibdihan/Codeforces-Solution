#include<stdio.h>

int main()

{
    int n,m,a,i,j,c=0;

    scanf("%d %d",&n,&m);

    int x[n],y[100001]={},z[n];

    for(i=0; i<n; i++)
        scanf("%d",&x[i]);

    for(i=n-1;i>=0;i--)
    {  if(!y[x[i]]) {y[x[i]]=1; c++;}  z[i]=c;  }

    while(m--)
    {
        scanf("%d",&a);
        printf("%d\n",z[a-1]);
    }
}
