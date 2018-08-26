#include <iostream>
#include <vector>
#include <string>
#include <map>


using namespace std;

int main()
{
    int x,h;
    cin>>x>>h;
    int sum =0;
    int j=0;
    for (int i =0;i<x;i++)
    {
        cin>>j;
        if(j > h)
        {
            sum+=2;
        }
        else
            sum+=1;
    }
    cout<<sum<<endl;
}