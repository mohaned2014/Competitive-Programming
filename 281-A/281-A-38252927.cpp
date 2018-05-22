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
    cin>>x;

    x[0]=(char)toupper(x[0]);
    cout<<x;
}