#include<stdio.h>

int main()

{
    int n,k,t,i,j;

    scanf("%d",&t);

    while(t--)
    {
       scanf("%d %d",&n,&k);

       int x[n],y[101]={},z[n],c=0,b;

       for(i=0;i<n;i++)
        {scanf("%d",&x[i]);
         if(!y[x[i]])  y[x[i]]=1; }

         for(i=0;i<=n;i++)
            if(y[i]) z[c++]=i;

         if(c>k) printf("-1\n");

         else
         {
             printf("%d\n",n*k);

             for(i=0;i<n;i++)
             {b=0;  for(j=0;j<k;j++)
                    {printf("%d ",z[b++]);
                    if(b==c) b=0;}  }
             printf("\n");
    }
}
}
