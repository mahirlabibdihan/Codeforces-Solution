#include<stdio.h>

int main()

{
    int a=0,b=0,i,j,n;


     scanf("%d",&n);
     char x[n];

     scanf("%s",x);

     for(i=0;i<n;i++)
    {if(x[i]=='4'||x[i]=='7') ;
    else break;}

    if(i==n)
        {
          for(i=0;i<n/2;i++)
            a=a+x[i];


          for(i=n/2;i<n;i++)
            b=b+x[i];

          if(a==b) printf("YES");

          else printf("NO");

        }

    else printf("NO");
}
