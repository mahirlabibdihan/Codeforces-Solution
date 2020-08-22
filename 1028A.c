#include<stdio.h>

int main()

{
    int a,b,i,j,p=-1,q=-1,r,s;

    scanf("%d %d",&a,&b);

    char x[a][b];

    for(i=0;i<a;i++)
        scanf("%s",&x[i][0]);

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(x[i][j]=='B')
            {
                if(p<0&&q<0) {p=i+1; q=j+1;}

                 r=i+1; s=j+1;
            }

        }
    }

    printf("%d %d",(p+r)/2,(q+s)/2);


}
