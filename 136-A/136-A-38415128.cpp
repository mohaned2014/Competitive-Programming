#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>      // std::setw

using namespace std;


int main()
{
    int n ;
    cin>>n;
    int arr[102] ={0};
    int temp;
    for(int i=1;i<=n;i++)
    {
        cin>>temp;
        arr[temp]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}