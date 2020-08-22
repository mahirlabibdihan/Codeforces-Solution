#include<stdio.h>
#include<math.h>


int main()

{
    float h,l;

    scanf("%f %f",&h,&l);

    printf("%.13f",(pow(l,2)-pow(h,2))/(2*h));
}
