#include<bits/stdc++.h>
using namespace std;
#define _for(i,a,n) for(i=a;i<n;i++)
#define fast {ios::sync_with_stdio(0);\
        cin.tie(nullptr);}

int n,p,i,q;
int main()
{fast  
    cin>>n;   vector<int> x(n);set<int> a[3];

    _for(i,0,3*n) cin>>p,i<n?x[i]=p:(a[p-1].insert(x[i%n]),0);

    cin>>n;  while(n--)
                 {
                    cin>>p; q=-1;
                   if(a[p-1].size()) q=*a[p-1].begin(); 
                   _for(i,0,3) a[i].erase(q);
                   cout<<q<<" ";     
                 }
}
