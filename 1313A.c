#include<stdio.h>

int main()
{
  int t,x[3],y,i,max,j,n,k;

  scanf("%d",&t);

  while(t--)

  {y=0;
     scanf("%d %d %d",&x[0],&x[1],&x[2]);


    for(j=3;j>0;j--)
     {
       max=0;

       for(i=1;i<j;i++)
       {
           if(x[i]>x[max])
           {
               max=i;
           }

           k=x[max];
           x[max]=x[j-1];
           x[j-1]=k;
       }
}



if(x[0]&&x[1]&&x[2])  {y=3;

if(x[1]>1&&x[2]>1) {y++;

if(x[0]>1&&x[1]>1&&x[2]>1){

if(x[2]>2){y++;

if(x[0]>2&&x[1]>2&&x[2]>2){y++;

if(x[0]>3&&x[1]>3&&x[2]>3)  {y++;}

}
}
}
}
}
else {if(x[2]) y=1;

if(x[1]) y++;

if(x[1]>1&&x[2]>1) y++;

}
printf("%d\n",y);

}
}



