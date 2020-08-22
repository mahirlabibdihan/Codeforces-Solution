#include<stdio.h>

int main()

{
    long long int n;

    scanf("%lld",&n);


     if(!n) printf("0");
    else{(n%2)?printf("%lld",(n+1)/2):printf("%lld",n+1);}

}
