#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int x_dif =abs(x2-x1);
    int y_dif =abs (y2-y1);
    bool isSquare = false;

    if ( (x_dif == y_dif) || x_dif ==0 ||y_dif ==0)
    {
        isSquare =true;
    }
    if (isSquare == false )
    {
        cout<<-1;
        return 0;
    }
    if (x_dif ==0)
    {
        cout<<x1+y_dif<<" "<<y1<<" "<<x2+y_dif<<" "<<y2;
    }
    else if (y_dif ==0)
    {
        cout<<x1<<" "<<y1+x_dif<<" "<<x2<<" "<<y2+x_dif;
    }
    else
    {
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    }



}