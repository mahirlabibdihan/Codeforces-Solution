#include<stdio.h>

int main()

{
    int t,i,j,k,n;
    char y;
    scanf("%d",&t);


    while(t--)
    {
        int sum=0;
        scanf("%d",&n);


char x[n];
    scanf("%s",&x);

        if(n==1) printf("-1\n");

        else
        {




          for(i=n-1; i>0; i--)
            {
                if(x[i]%2)
                {
                    k=i;
                    break;
                }


            }

            if(!i) printf("-1\n");

            else
            {
                for(i=0; i<=k; i++)

                sum=sum+x[i];



               if(sum%2==0) {
                 for(i=0; i<=k; i++)

                printf("%c",x[i]);

                printf("\n");
               }

               else{
                    for(i=k-1; i>0; i--)
                    {
                        if(x[i]%2) {x[i]=-1; break; }
                    }


                    if(i==0) printf("-1\n");


                    else{
                            for(i=0; i<=k; i++)


                       { if(x[i]>=0)
                           printf("%c",x[i]);
                       }

                    printf("\n");}
                }
            }
        }
    }
}
