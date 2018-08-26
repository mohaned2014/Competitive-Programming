#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int no_of_days;
    cin>>no_of_days;
    int days[95];
    for(int i =0; i<no_of_days;i++)
    {
        cin>>days[i];
    }
    if (days[no_of_days -1] == 15)
    {
        cout<<"DOWN";
        return 0;
    }
        if (days[no_of_days -1] == 0)
        {
            cout<<"UP";
        return 0;
        }

    if (no_of_days ==1 )
    {
        cout<<-1;
        return 0;
    }
    if (days[no_of_days -1] > days[no_of_days -2] )
    {
        cout<<"UP";
        return 0;
    }
    else
    {
        cout<<"DOWN";
        return 0;
    }

}