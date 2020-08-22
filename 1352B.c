#include<stdio.h>

int main()
{
    int t,n,i,k;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&k);

        if(!(n%2)&&k<=n/2) { printf("YES\n"); for(i=0; i<k-1; i++)  printf("2 "); printf("%d\n",n-(2*i)); }

        else if(((!(n%2)&&!(k%2))||(n%2&&k%2))&&k<=n) {  printf("YES\n"); for(i=0; i<k-1; i++) printf("1 "); printf("%d\n",n-i); }

        else printf("NO\n");
    }
}
