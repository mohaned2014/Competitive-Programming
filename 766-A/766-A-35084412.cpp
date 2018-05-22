#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;
    if (x == y)
    {
        cout<<-1;
        return 0;
    }

    int m = x.length();
    int n = y.length();
    int f = max(m,n);
     cout<<f;

}