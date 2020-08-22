#include<stdio.h>

int main()

{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int x[4],y[6],z[10],i,j,a,b,c=0,u,v;


        for(i=0;i<4;i++)
            scanf("%d",&x[i]);
        for(i=0;i<6;i++)
            scanf("%d",&y[i]);


        z[0]=y[0]-y[2]; if(z[0]<0) z[0]=-1*z[0];
        z[1]=y[4]-y[0];  if(z[1]<0) z[1]=-1*z[1];

        a=(z[1]>z[0])?z[1]:z[0];

        z[2]=y[1]-y[3]; if(z[2]<0) z[2]=-1*z[2];
        z[3]=y[5]-y[1];  if(z[3]<0)z[3]=-1*z[3];

        b=(z[3]>z[2])?z[3]:z[2];




        if(x[0]<=a&&x[1]<=a&&x[2]<=b&&x[3]<=b) printf("YES\n");


        else
            { u=x[1]-x[0]-y[0];
            v=x[3]-x[2]-y[1];

            if(u>=y[2]&&u<=y[4]&&v>=y[3]&&v<=y[5]) printf("YES\n");



          else printf("NO\n");}







    }


}


