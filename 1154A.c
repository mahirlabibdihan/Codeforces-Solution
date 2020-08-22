#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int x,y,z,a,b,c,p,q;

    scanf("%d %d %d %d %d %d",&x,&y,&z,&a,&b,&c);

    (b*(abs(x-z)+abs(x-y))+3*c<=abs(x-y)*a)?printf("YES"):printf("NO");

}
