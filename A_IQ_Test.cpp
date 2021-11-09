#include <iostream>
using namespace std;

int main()
{
    char cell[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>cell[i][j];
        }
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            int count=0;
            
            for(int p=i;p<i+2;p++)
            {
                for(int q=j;q<j+2;q++)
                {
                    if(cell[p][q]=='#')
                    {
                        count++;
                    }
                }
            }
            if(count!=2) 
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
}