#include<stdio.h>

int main()

{
    int n,m,o,i,j=0;

    scanf("%d %d",&n,&m);



    if(n>=m)
        printf("%d",n-m);

    else
    {
        i=m;
        while(n!=i)
        {
            o=i%2;
            if(o)
            {
                i=i+o;
                j++;
            }
            if(i!=n)
            {
                i=i/2;
                j++;

                if(i<n)
                   {
                      j=j+(n-i);
                      break;
                   }

            }

        }
printf("%d",j);
    }

}

