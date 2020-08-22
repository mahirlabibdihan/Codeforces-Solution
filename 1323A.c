#include<stdio.h>

int main()

{
  int t,n,i,j;
  scanf("%d",&t);

  while(t--)
  {
      scanf("%d",&n);

      int x[n],s=0;




      for(i=0;i<n;i++)
      {scanf("%d",&x[i]);
      s=s+x[i];}

      if(s%2==0) {printf("%d\n",n);
      for(i=1;i<=n;i++)
      printf("%d ",i);
      printf("\n");}

      else
      { if(n==1) printf("-1\n");
        else
          {for(i=0;i<n;i++)
      {
          if(x[i]%2) {j=i; break;}

      }
      printf("%d\n",n-1);
      for(i=1;i<=n;i++)
      { if(i==j+1) ;
      else
          printf("%d ",i);
      } printf("\n");
      }

  }}}










