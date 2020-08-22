#include<stdio.h>
#include<math.h>

int main()

{
    int n,i,a=0,b=0,c=0,d=0,t=0,e;
    scanf("%d",&n);
    int x[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
        if(x[i]==1) a++;
        else if(x[i]==2) b++;
        else if(x[i]==3) c++;
        else d++;
    }
    t=t+d;
    e=b%2;
    t=t+ceil(1.0*b/2);

    if(a>=e)
    {
        if(a==e)  t=t+c;
        else
        {
            if(c>=a) t=t+c;
            else t=t+c+ceil(1.0*(a-c-2*e)/4);
        }
    }
    else t=t+c;

    printf("%d",t);
}
