#include <stdio.h>


int main()
{
    
  long long int n,m,i,sum=1;

  scanf("%lld %lld",&n,&m);

  for(i=0;sum<m;i++)
       
    sum=sum*n;
    
         if(sum==m) printf("YES\n%lld",i-1);

    else printf("NO");

    }

