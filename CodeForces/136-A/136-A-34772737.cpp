#include <iostream>
#include <stdlib.h>     /* abs */

using namespace std;

int main()
{
    int x;
    cin>>x;
    int f;
    int arr[100];
    for (int i=1;i<=x;i++)
    {
        cin>>f;
        arr[f] = i;
    }
    for (int i=1;i<=x;i++)
    {
        cout<<arr[i]<<" ";
    }
}