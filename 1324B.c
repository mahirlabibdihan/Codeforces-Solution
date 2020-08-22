#include<stdio.h>

int main()

{
    int t,n,i,j,a,b;

    scanf("%d",&t);

 while(t--)
 {
     scanf("%d",&n);

     int x[n],c;

     for(i=0;i<n;i++)
     scanf("%d",&x[i]);

      j=0; c=0; b=0;

         for(i=j+1;i<n;i++)
     {
         a=x[j];

        if(!c&&x[i]!=a) c=1;

        if(x[i]==a)   b++;

        if((c&&x[i]==a)||b==2) {printf("YES\n"); break;}

        if(i==n-1&&j<n-3) {j++; i=j; c=0; b=0;}

     }

     if(i==n)  printf("NO\n");

}
}
