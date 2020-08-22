#include<stdio.h>
#include<math.h>

int main()

{
    int t,n;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        int x[31],j=0,s=sqrt(n),c=1,a,b,i;

        for(i=2; i<=s&&n>1&&c<2;)
        {   if(!(n%i))
            { n/=i; x[j]=i; if(j&&x[j]!=x[j-1]) c++; j++; }
            else i++;}

            x[j]=n;

            if(c==1&&j>2)
            {
                if(x[j]==1&&j>5) {a=pow(x[0],2); b=pow(x[0],j-3); printf("YES\n%d %d %d\n",x[0],a,b);}

                else if(x[j]>1&&j>2) {a=pow(x[0],j-1); printf("YES\n%d %d %d\n",x[0],a,x[j]);}

                else  printf("NO\n");
            }

            else if(c==2&&j>1)
            {
                if(x[j]==1&&j>3)
                     {  a=ceil(1.0*pow(x[0],j-2));   printf("YES\n%d %d %d\n",x[0],a,x[j-1]);}

                else if(x[j]!=1&&x[j]!=x[j-1])
                     { a=ceil(1.0*pow(x[0],j-1));  printf("YES\n%d %d %d\n",a,x[j-1],x[j]); }

                else if(x[j]==x[j-1]&&j>2)
                {   a=ceil(1.0*pow(x[0],j-2)); printf("YES\n%d %d %d\n",x[0],x[j],a*x[j]); }

                else  printf("NO\n");
            }
            else  printf("NO\n");
    }
}
