#include <iostream>
#include <cmath>
using namespace std;

int arr[28];
int main()
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        string x;
        cin>>x;
        if(x.size() >10 )
        {
            cout<<x[0]<<x.size()-2<<x[x.size()-1]<<endl;
            continue;
        }
        else
            cout<<x<<endl;
    }

}