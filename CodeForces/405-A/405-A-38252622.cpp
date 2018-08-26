#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int arr[101];
    for(int i=0;i<x;i++)
        cin>>arr[i];
    sort(arr,arr+x);
    for(int i=0;i<x;i++)
        cout<<arr[i]<<" ";

}