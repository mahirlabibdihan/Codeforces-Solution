#include<stdio.h>

int main()

{
    int t,x[3],n,j,k,i,max;
    scanf("%d",&n);

    while(n--)
    {scanf("%d %d %d",&x[0],&x[1],&x[2]);


    for(j=3;j>0;j--)
     {
       max=0;

       for(i=1;i<j;i++)
       {
           if(x[i]>x[max])    max=i;

           k=x[max];
           x[max]=x[j-1];
           x[j-1]=k;
       }
}

        if(x[2]>x[1]&&x[1]>x[0])
        {
           x[0]++;  x[1]++;  x[2]--;
        }

        else if(x[2]==x[1]&&x[2]>x[0]&&x[1]>x[0])
        {
            if(x[2]-x[0]>1) {x[0]++; x[1]--; x[2]--;}
            else x[0]++;

        }


         else if(x[0]==x[1]&&x[2]>x[0]&&x[2]>x[1])
         {      if(x[2]-x[0]>1) {x[0]++; x[1]++; x[2]--;}
            else x[2]--;
            }

          else if(x[2]==x[0])  ;

          printf("%d\n",(x[2]-x[0])+(x[1]-x[0])+(x[2]-x[1]));
}
}
