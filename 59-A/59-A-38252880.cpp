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
    string x;
    int low=0;
    int upper =0;
    cin>>x;
    for(int i = 0; i<x.size();i++)
    {
        if(x[i] >='a')
            low++;
        else
            upper++;
    }
    if(low>=upper)
    for(int i = 0; i<x.size();i++)
        cout<<(char)tolower(x[i]);
    else
    for(int i = 0; i<x.size();i++)
        cout<<(char)toupper(x[i]);
}