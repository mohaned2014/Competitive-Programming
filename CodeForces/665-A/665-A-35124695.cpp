#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{

    int a,b;
    int x,y;
    cin>>a>>b>>x>>y;
    int counter =0;
    string leave_time;
    cin>>leave_time;int leave_hour=0;

    //get hour of leaving
    if(leave_time[0] == '0')
    {

        leave_hour = leave_time[1] - '0';

    }
    else if (leave_time[0] == '1' )
    {
        leave_hour = leave_time[1] - '0';
        leave_hour += 10;
    }
    else if (leave_time[0] == '2' )
    {
        leave_hour = leave_time[1] - '0';
        leave_hour += 20;
    }
    //leave min
    int leave_min =0;
        leave_min =(leave_time[3] - '0') *10;
        leave_min += leave_time[4] - '0';


    //leave time in min
    int leave =(leave_hour*60)+leave_min;

    //increase by every bus leave from b
    for(int i =300;i<(24*60) ; i += x)
    {
        //my bus left && bus didn't arrive
        if ( ((i+y) > leave ) && i< ( leave+b) )
        {
            counter ++;
        }
    }
    cout<<counter;



}