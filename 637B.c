#include<stdio.h>

int main()

{
    long long int t,n,k,i,j,c;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld",&n,&k);

        long long int x[n],y[n];

        for(i=0;i<n;i++)
        {
            scanf("%lld",&x[i]);
            y[i]=0;
        }
        long long int a=0,b,d=0,e=0,f=0;
        j=0; c=0;


        for(i=1;i<n-1;i++)
        {
            if(x[i]>x[i-1]&&x[i]>x[i+1]) {y[j++]=i; c++;}

        }





       for(b=c-1;b>0;b--)
       {
           for(i=0;i+b<j;i++)
           {
               d=i+b;

               if(y[d]-y[i]+3<=k) { e=i; f=d; break;}
           }





           if(e||f) break;


       }


       if(b>0)
       {
          if(y[f]+1<k) a=1;

          else a=y[f]-k+3;

        printf("%lld %lld\n",f-e+2,a);}

        else
        {
            if(y[0]+1<k) a=1;
            else a=y[0]-k+3;

            printf("2 %lld\n",a);
        }

    }
}

