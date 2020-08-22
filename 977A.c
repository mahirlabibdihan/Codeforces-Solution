#include<stdio.h>
int main()

{ int n,k,i,j;

scanf ("%d %d",&n,&k);

for(i=0;i<k;i++)

{if(n%10)

n--;


else
    n/=10;


    if(n==1)

        break;

}


printf("%d", n);

return 0;

}
