#include<stdio.h>

int main()

{
    int n,c[5]={},s,i,j,sum=0;
    scanf("%d",&n);

    int x[n],y[5];

    for(i=0; i<n; i++)
        scanf("%d",&x[i]);

    for(i=0; i<n; i++)
    {
        if(!(x[i]/10))
        {  if(x[i]) {y[1]=x[i]; c[1]=1; }
            else {y[0]=x[i]; c[0]=1;} }

        else
        {if(!(x[i]/100))
        { if(x[i]%10) {y[4]=x[i]; c[4]=1;}
          else {y[2]=x[i]; c[2]=1;}  }

        else
        { y[3]=x[i]; c[3]=1; }
        }
    }

    for(i=0;i<4;i++) sum+=c[i]; if(!c[1]&&!c[2]) sum+=c[4];

    printf("%d\n",sum);

    for(i=0;i<4;i++) if(c[i]) printf("%d ",y[i]);

    if(!c[1]&&!c[2]&&c[4]) printf("%d ",y[4]);
}




