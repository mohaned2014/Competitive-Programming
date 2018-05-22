#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;
    for (auto i =0;i<x.size();i++)
    {
        if(tolower(x[i]) < tolower(y[i]))
        {
            cout<<-1;
            return 0;
        }
        else if(tolower(x[i]) > tolower(y[i]))
        {
            cout<<1;
            return 0;
        }
    }
    cout<<0;


}