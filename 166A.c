#include<stdio.h>

int main()

{
    int n,m,i,j,max,k,c=1;

    scanf("%d %d",&n,&m);

    int x[n],y[n];

    for(i=0;i<n;i++)
        scanf("%d %d",&x[i],&y[i]);


     for(j=0;j<n;j++)
     {
       max=j;

       for(i=j+1;i<n;i++)
       {
           if(x[i]==x[max])
           {
               if(y[i]<y[max]) max=i;
           }

           else if(x[i]>x[max])
           {
               max=i;
           }
       }
            if(max!=j)
            {k=x[max];
           x[max]=x[j];
           x[j]=k;

           k=y[max];
           y[max]=y[j];
           y[j]=k;}

        }

        k=m-1;

        for(i=k;i>0;i--)
        { if(x[i]==x[i-1]&&y[i]==y[i-1]) c++;
        else break;}

         for(i=k;i<n-1;i++)
        { if(x[i]==x[i+1]&&y[i]==y[i+1]) c++;
        else break;}

        printf("%d",c);

}
