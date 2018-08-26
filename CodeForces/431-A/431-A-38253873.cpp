#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <deque>


using namespace std;

int main()
{
    int arr[5];
    cin>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    string x;
    cin>>x;
    int sum=0;
    for(int i=0;i<x.size();i++)
    {
        sum += ( arr[(int)x[i]-48] );
    }
    cout<<sum;


}