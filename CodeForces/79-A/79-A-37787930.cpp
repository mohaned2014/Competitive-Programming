#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    while(true)
    {
        if (x >= 2 && y>=2)
        {
            x -= 2;
            y -=2;
        }
        else if(x>=1 &&y >=12)
        {
            x-=2;
            y-= 12;
        }
        else if(x==0 &&y >=22)
        {
            y-=22;
        }
        else
        {
            cout<<"Hanako";
            return 0;
        }

        //hanako turn
        if(y>=22)
        {
            y-=22;
        }
        else if(y>=12 && x>=1)
        {
            y-=12;
            x-=1;
        }
        else if (y>= 2 && x>= 2)
        {
            y-=2;
            x-=2;
        }
        else
        {
            cout<<"Ciel";
            return 0;
        }
    }





}