#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int x;
    cin>>x;
    x++;
    while ( x%10 == (x/10)%10 || x%10 ==(x/100)%10 || x%10 == (x/1000)%10 ||(x/10)%10 ==(x/100)%10 || (x/10)%10 ==(x/1000)%10 ||(x/100)%10==(x/1000)%10)
        x++;
    cout<<x;
}