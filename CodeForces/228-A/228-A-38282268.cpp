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
    long long arr[5];
    int counter =0;
    for(int i =0;i<4;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<4;i++)
    {
        for(int j =0;j<4;j++)
        {
            if(arr[i] == arr[j] &&i!=j && arr[i] != -1)
            {
                counter++;
                arr[j] =-1;
            }
        }

    }
    cout<<counter;

}