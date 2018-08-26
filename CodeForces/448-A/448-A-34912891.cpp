#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int x1,y1,z1;
    cin>>x1>>y1>>z1;
    int j;
    cin>>j;
    int sum1 = (x+y+z)/5;

    if ((x+y+z)%5 != 0)
    {
        sum1 ++;
    }
    int sum2 = (x1 +y1+z1)/10;
    if ((x1 +y1+z1) %10 != 0)
    {
        sum2 ++;
    }


    if ( sum1 +sum2 <= j)
    {
        cout<<"YES";
        return 0;
    }
    else
    {
        cout<<"NO";
        return 0;
    }



}