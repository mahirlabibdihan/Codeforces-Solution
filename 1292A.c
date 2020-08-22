#include<stdio.h>

int main()

{
    int n,q,i,a,b,j,c=-1;

    scanf("%d %d",&n,&q);

    int x[2][100000]= {};

    while(q--)
    {
        scanf("%d %d",&a,&b);

        x[a-1][b-1]=!x[a-1][b-1];

        if(c==1&&x[a-1][b-1])
        {printf("No\n");c=1;}


        else if(!c&&!x[a-1][b-1])
        {printf("Yes\n");c=0;}



        else if(!c&&x[a-1][b-1])
        {

            if((!(a-1)&&((!(b-1)&&(x[1][b-1]||x[1][b]))||(b==n&&(x[1][b-2]||x[1][b-1]))||(b>1&&b<n&&(x[1][b-2]||x[1][b-1]||x[1][b]))))||(a-1&&((!(b-1)&&(x[0][b-1]||x[0][b]))||(b==n&&(x[0][b-2]||x[0][b-1]))||(b>1&&b<n&&(x[0][b-2]||x[0][b-1]||x[0][b])))))
            {printf("No\n");c=1;}

            else
            {printf("Yes\n");c=0;}

        }




        else
        {
            for(i=0; i<n; i++)
                if(x[0][i])
                {
                    if((!i&&(x[1][i]||x[1][i+1]))||(i==n-1&&(x[1][i-1]||x[1][i]))||(i>0&&i<n-1&&(x[1][i-1]||x[1][i]||x[1][i+1])))
                    {printf("No\n");c=1;break;}
                }

            if(i==n)
            {printf("Yes\n");c=0;}

        }
    }
}

