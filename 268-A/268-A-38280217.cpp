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
    int x;
    cin>>x;
    int arr1[32];
    int arr2[32];
    for(int i =0;i<x;i++)
    {
        cin>>arr1[i]>>arr2[i];
    }
    int counter =0;
    for(int i =0 ;i<x;i++)
    {
        for(int j =0 ;j<x;j++)
        {
            if(arr1[i]==arr2[j])
                counter++;
        }
    }
    cout<<counter<<endl;

}