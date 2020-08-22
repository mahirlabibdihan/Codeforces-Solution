#include<stdio.h>

int main()

{
    int n,i,sum=0,k,j,max;

    scanf("%d",&n);

    int x[n];

    for(i=0;i<n;i++)
    {scanf("%d",&x[i]);
    sum=sum+x[i];}



    if(n<3) printf("0");


     else if(n==3)
    {
        if(x[0]==x[1]&&x[1]==x[2]) printf("1");
        else printf("0");
    }


    else

    }

    else
    {
        if(n%3) printf("0");

        else
        {
           k=sum/3;

           if(n<6)
    {

            max=0;

       for(i=0;i<n;i++)
       {
           if(x[i]>x[max])
           {
               max=i;
           }
       }

        if(max!=k) printf("0");

        }



        else
    }
}
