#include<stdio.h>
 int main()

 {
int n,i;

scanf("%d",&n);

int x[n];

for(i=0;i<n;i++)

{
    scanf("%d",&x[i]);
}

for(i=0;i<n;i++)

{
    if(x[i])
      {
        printf("Hard");
      break;}

}


if(i==n)
printf("Easy");


 return 0;

}
