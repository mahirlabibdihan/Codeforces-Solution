#include<stdio.h>
int main()

{ int i,n;

scanf("%d",&n);



for(i=1;i<=n;i++)

{


    if(i%2)

printf("I hate ");

 else
    printf("I love ");



    if(i!=n)

        printf("that ");

}

printf("it");
}
