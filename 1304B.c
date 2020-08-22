#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n,m,i,k,a=0,c=0,j,sum=0;

    scanf("%d %d",&n,&m);

    char x[n][m+1],y[n][m+1],z[m+1];

    for(i=0; i<n; i++)
        scanf("%s",&x[i][0]);


    for(i=0; i<n; i++)
    {
        if(!x[i][0]) continue;
        strcpy(z,x[i]);  strrev(z);

        for(j=0; j<n; j++)
        {
            if(!x[j][0]||j==i) continue;

            if(!strcmp(z,x[j]))
            {
                strcpy(y[n-1-a],x[j]);  strcpy(y[a++],x[i]);

                x[i][0]=0;   x[j][0]=0;   break;
            }

            if(a>n/2) break;
        }
    }


    if(a<ceil(1.0*n/2))
    {
        for(i=0; i<n; i++)
        {
            if(!x[i][0]) continue;
            strcpy(z,x[i]); strrev(z);

            if(!strcmp(z,x[i]))
            {
                c=ceil(1.0*n/2);

                strcpy(y[c],x[i]);

                sum+=m;  break;
            }
        }
    }


    printf("%d\n",sum+2*a*m);

    for(i=0; i<a; i++)
        printf("%s",y[i]);

    if(c) printf("%s",y[c]);

    for(i=n-a; i<n; i++)
        printf("%s",y[i]);

}
