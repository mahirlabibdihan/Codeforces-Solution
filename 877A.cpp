#include<bits/stdc++.h>
using namespace std;

int find(string x,string y){int p=x.length(),q=y.length(),j,k,c=0;for(j=0; j<=p-q; j++){for(k=0; k<q; k++)if(y[k]!=x[k+j])  break;if(k==q)  {c++; j+=q-1;}}return c;}

int main()
{
    string y[5]={"Danil", "Olya", "Slava", "Ann" ,"Nikita"},x;

    cin>>x;  int n=x.length(),i,j,c=0;

    for(i=0;i<5;i++) c+=find(x,y[i]);

    if(c==1) cout<<"YES";  else cout<<"NO";
}
