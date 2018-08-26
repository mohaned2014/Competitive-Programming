#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int prob =1;
    prob+=(6-max(x,y));
    if(prob == 6)
        cout<<1<<"/"<<1<<endl;
    else if((prob %2) ==0)
        cout<<prob/2<<"/"<<6/2<<endl;
    else if(prob%3 ==0)
        cout<<prob/3<<"/"<<6/3<<endl;
    else
        cout<<prob<<"/"<<6<<endl;
}