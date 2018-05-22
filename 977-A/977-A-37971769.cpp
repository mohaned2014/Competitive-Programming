#include <cctype>
#include <vector>
#include <iostream>
#include <string>

using namespace std;


int main()
{
    long x;
    int y;
    cin>>x>>y;
    for(int i=0;i<y;i++)
    {
        if (x %10 ==0)
            x/=10;
        else
            x--;
    }
    cout<<x<<endl;
}