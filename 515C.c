#include<stdio.h>
#include<string.h>

int main()

{
    int n,i,j=0,k,max;

    scanf("%d",&n);

    char x[n];
    int y[4*n];

    scanf("%s",x);

    for(i=0;i<n;i++)
        x[i]-=48;





    for(i=0;i<n;i++)
    {
        if(x[i]>1)
        {
            if(x[i]==9) {y[j++]=3; y[j++]=3; y[j++]=2; y[j++]=7;}

            else if(x[i]%2) y[j++]=x[i];

            else if(x[i]==2) y[j++]=2;

            else if(x[i]==4) {y[j++]=3; y[j++]=2; y[j++]=2;}

            else if(x[i]==6) {y[j++]=5; y[j++]=3;}

            else if(x[i]==8)  {y[j++]=7; y[j++]=2; y[j++]=2; y[j++]=2;}

        }
    }



 for(k=0;k<j;k++)
     {  max=k;   for(i=k+1;i<j;i++)   if(y[i]>y[max])  max=i;
       if(max!=k)  { n=y[k];  y[k]=y[max];   y[max]=n;}    }


    for(i=0;i<j;i++)
        printf("%d",y[i]);


}
