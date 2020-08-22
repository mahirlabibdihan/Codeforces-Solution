#include<iostream>
using namespace std;

int main()
{
   int a,b,c=0,x,y; cin>>a>>b;

   for(c=0;max(a,b)>2;c++)
   {
       x=max(a,b); y=min(a,b); a=x-2; b=y+1;
   }

   if(a==2|b==2) c++;

   cout<<c;
}
