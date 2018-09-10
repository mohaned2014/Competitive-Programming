#include <iostream>

using namespace std;

int main()
{
    long long x;
    cin>>x;
    int sign = x%2==0 ? 1 : -1 ;
    x/=2;
    if(sign==-1)
        x++;
    x*=sign;
    cout<<x<<endl;
}