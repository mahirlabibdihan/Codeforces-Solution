#include <iostream>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    long long c=0;
    while(b!=0)
    {
        c+=a/b;
        long long tmp = b;
        b = a%b;
        a = tmp;
    }
    cout<<c;
}