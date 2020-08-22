#include<bits/stdc++.h>
using namespace std;

void swap(char x[],char y[]){char z[101];strcpy(z,x);strcpy(x,y);strcpy(y,z);}

void sort(string x[],int n){int j,min,i;for(j=0; j<n; j++){min=j;for(i=j+1; i<n; i++) if(x[min].length()>x[i].length()) min=i;swap(x[min],x[j]);}}

int main()
{
    int n,i,j,min;  string x[101];

    cin>>n;  for(i=0; i<n; i++)  cin>>x[i];  sort(x,n);

    for(i=0; i<n-1; i++) {j=x[i+1].find(x[i]); if(j<0|j>n) {cout<<"NO"<<endl;break;}}

    if(i==n-1)  { cout<<"YES"<<endl;  for(i=0; i<n; i++)  cout<<x[i]<<endl;}
}
