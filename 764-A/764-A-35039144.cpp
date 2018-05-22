#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    int n,m,z;
    cin>>n>>m>>z;
    int counter =0;
    int temp=m;

    while(temp<=z)
    {
        if (temp %n ==0)
        {
            counter++;
        }
        temp = temp +m;
    }
    cout<<counter;

}