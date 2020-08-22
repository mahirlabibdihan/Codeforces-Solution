#include<stdio.h>

int main()

{
    int t,i,j,s,a,b;

    scanf("%d",&t);

    int n[t];

    for(i=0;i<t;i++)
    {a=0; b=0;

        scanf("%d",&n[i]);

    s=0;
    int x[n[i]];
    for(j=0;j<n[i];j++)

    {  scanf("%d",&x[j]);

    s=s+x[j];


    }

    if(s%2)
        printf("YES\n");

    else
        {for(j=0;j<n[i];j++)

           {if(x[j]%2)
           a=1;

           else b=1;

           }

           if(a&&b) printf("YES\n");

           else printf("NO\n");


        }





    }   }
