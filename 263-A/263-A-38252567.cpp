#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>

using namespace std;

int main()
{
    int x ;
    int dis =0;
    for(int i=1;i<=5 ;i++)
    {
        for(int j=1;j<=5 ;j++)
        {
            cin>>x;
            if(x==1)
            {
                dis+= abs(3-i);
                dis+= abs(3-j);
            }
        }
    }
    cout<<dis<<endl;

}