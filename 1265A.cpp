#include<iostream>
using namespace std;

void dihan()
{
    string x; cin>>x; int n=x.length(),i;

    for(i=0;i<n-1;i++) if(x[i]!='?'&x[i]==x[i+1]) break;

    if(i==n-1)
    {
       for(i=0;i<n;i++)
            if(x[i]=='?')
               if(i>0&i<n-1)
                 if(x[i+1]=='?') if(x[i-1]=='c') x[i]='a'; else x[i]=x[i-1]+1;
                 else if((x[i-1]=='a'|x[i-1]=='b')&(x[i+1]=='b'|x[i+1]=='a')) x[i]='c';
                 else if((x[i-1]=='a'|x[i-1]=='c')&(x[i+1]=='c'|x[i+1]=='a')) x[i]='b';
                 else x[i]='a';

               else if(x[i+1]=='a'|x[i-1]=='a') x[i]='b';
               else  x[i]='a';

       cout<<x<<endl;
    }
    else cout<<"-1"<<endl;
}

int main(){int t;cin>>t;while(t--)dihan();}
