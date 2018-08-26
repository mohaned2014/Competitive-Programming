#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    long long sum;
    cin>>x>>sum;
    char ch;
    long long temp;
    int counter =0;
    for(int i=0;i<x;i++)
    {
        cin>>ch>>temp;
        if(ch =='+')
            sum+=temp;
        else
        {
            if(temp <= sum)
                sum-=temp;
            else
                counter++;
        }
    }
    cout<<sum<<" "<<counter<<endl;



}