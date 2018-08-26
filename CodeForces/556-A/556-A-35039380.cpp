#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string x;
    cin>>x;
    int arr[3];
    arr[0] =0;
    arr[1] =0;
    for(int i=0 ; i<n; i++)
    {
        if (x[i] =='0')
        {

            arr[0] ++;
        }
        else
        {
            arr[1]++;
        }

    }
    int dif =abs(arr[0] - arr[1]);
    cout<<dif;

}