#include<stdio.h>
int main()

{
    int n,a=0,i;

    scanf("%d",&n);


   for(i=1;i<=(n/2);i++)

    {  if(n==1)
    break;

        else if(n%i==0)
        a=a+1;
    }

    printf("%d",a);

return 0;
}
