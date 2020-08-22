#include<stdio.h>

int main()

{
    int n,f,i,s=0;

    scanf("%d %d",&n,&f);

    int  h[n];

    for(i=0;i<n;i++)
        scanf("%d",&h[i]);


    while(n--)
    { if(h[n]>f)
            s=s+2;
       else
            s=s+1;
    }

    printf("%d",s);




}
