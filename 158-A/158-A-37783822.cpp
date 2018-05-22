#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int x ,y;
    cin>>x>>y;
    int counter =0;
    int* arr =new int[x+1];
    for (int i =1;i <= x ;i++)
    {
        cin>>arr[i];
    }
    for (int i =1;i <= x ;i++)
    {
        if(arr[i] >= arr[y] && arr[i] > 0 )
        {
            counter ++;
        }
    }
    cout<<counter;
    free (arr);
}