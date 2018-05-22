#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <deque>


using namespace std;

int main()
{
    int x;
    cin>>x;
    deque<int> d;
    int value;
    int first =0;
    int sec =0;
    for(int i=0;i<x;i++)
    {
        cin>>value;
        d.push_back(value);
    }
    int turn =0;
    while(!d.empty())
    {
        if(turn%2==0)
        {
            if (d.front() > d.back())
            {
                first += d.front();
                d.pop_front();
            }
            else
            {
                first +=d.back();
                d.pop_back();
            }
        }
        else
        {
            if (d.front() > d.back())
            {
                sec += d.front();
                d.pop_front();
            }
            else
            {
                sec +=d.back();
                d.pop_back();
            }

        }
        turn++;
    }


    cout<<first<<" "<<sec<<endl;

}