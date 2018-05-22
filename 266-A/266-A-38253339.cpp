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
    string s;
    cin>>s;
    int counter =0;
    for(int i=0;i<x-1;i++)
    {
        if (s[i]==s[i+1])
            counter++;
    }
    cout<<counter;


}