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
    int a;
    cin>>a;
    string x;
    string y;
    int counter =1;
    cin>>x;
    for(int i =0;i<a-1;i++)
    {
        cin>>y;
        if(x != y)
        counter++;
        x=y;
    }
    cout<<counter<<endl;


}