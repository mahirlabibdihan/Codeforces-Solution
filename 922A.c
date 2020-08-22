#include <stdio.h>


int main()
{
   
int x,y;

scanf("%d %d",&y,&x);

if(x-1>y||!x) printf("No");

else if(!y&&x==1) printf("Yes");

else if(x>1)
{
    if((y-x+1)%2) printf("No");

    else printf("Yes");

}

else printf("No");
}


 