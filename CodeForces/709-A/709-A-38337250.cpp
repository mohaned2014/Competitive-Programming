#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    int n,maxsize,emptyafter;
    unsigned long long sum =0;
    int counter=0;
    cin>>n;
    cin>>maxsize;
    cin>>emptyafter;
    long long x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x <= maxsize)
            sum+=x;
        if(sum > emptyafter)
        {
            counter++;
            sum=0;
        }
    }
    cout<<counter;


}