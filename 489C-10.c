#include<stdio.h>

int main()

{
    int m,s,i,j,k=0;

    scanf("%d %d",&m,&s);
    if(m==1&&!s) printf("0 0");
    else if(s>0&&s<=9*m)
    {
        int x[m];
        for(i=0; s<=9*(m-i)+1; i++);
        i=i-1;
        for(j=0; j<m; j++)
        {
            if(j==i)
            {
                if(!i) x[j]=s-(9*(m-1-i));

                else  x[j]=s-(9*(m-1-i)+1);
            }

            else if(j<i)
            {
                if(!j) x[j]=1;
                else  x[j]=0;
            }

            else if(j>i) x[j]=9;
        }
        {
            for(j=0; j<m; j++)
                printf("%d",x[j]);
        }
        printf(" ");


            if(x[i]<9&&x[0]==1)
            {
                x[i]++;
                x[0]=0;
            }
            for(j=m-1; j>=0; j--)
            {
                if(x[j])
                    printf("%d",x[j]);
                else k++;
            }

            while(k--)
                printf("0");
        }

    else printf("-1 -1");
}
