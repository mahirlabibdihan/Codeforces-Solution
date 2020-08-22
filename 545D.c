#include<stdio.h>

int main()

{
    int n,i,j,sum=0,c=0,min,a=0,k;

    scanf("%d",&n);

    int x[n];

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

      for(j=0;j<n;j++)
      {

       min=1000000001;

       for(i=0;i<n;i++)

        if(x[i]>=sum&&x[i]-sum<min)  {min=x[i]-sum; k=i;a=1; if(!min)  break;}

        if(!a) break;   else {c++;   sum+=x[k];   x[k]=0;   a=0;}

      }

        printf("%d",c);
}

