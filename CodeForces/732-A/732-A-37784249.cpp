#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    for (int i =1;true;i++)
    {
        if ((x*i) % 10 ==0)
        {
            cout<<i;
            return 0;
        }
        else if ((x*i)%10 == y )
        {
            cout<<i;
            return 0;
        }
    }

}