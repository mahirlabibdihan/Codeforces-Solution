    #include <iostream>
    using namespace std;
    typedef long long ll;

    void solve()
    {
        int a,b;
        cin>>a>>b;
        cout<<min(min(a,b),(a+b)/4)<<endl;
    }
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
    }