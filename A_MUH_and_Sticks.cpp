#include <iostream>
#include <map>
using namespace std;

int main()
{
    int l[6];
    map<int, int> c;
    bool flag=false,isAlien=true;
    for (int i = 0; i < 6; i++)
    {
        cin >> l[i];
        c[l[i]]++;
        if (c[l[i]] == 4)
        {
            isAlien = false;
        }
        if (c[l[i]] == 5)
        {
            flag = true;
        }
    }
    if (isAlien)
    {
        cout << "Alien";
    }
    else
    {
        if(c.size()==1)
        {
            cout<<"Elephant";
        }
        else if(c.size()==3)
        {
            cout<<"Bear";
        }
        else if(flag)
        {
            cout<<"Bear";
        }
        else
        {
            cout<<"Elephant";
        }
    }
}