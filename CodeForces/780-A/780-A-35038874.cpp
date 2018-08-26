#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int arr[1000000];
    int n;
    cin>>n;
    n=n*2;
    int temp;
    int counter =0;
    int maxa=0;


    for(int i =0;i<n ;i++)
    {
        cin>>temp;
        if (arr[temp] == 0)
        {
            arr[temp]++;
            counter ++;
            if (counter> maxa)
            {
                maxa =counter;
            }

        }
        else if(arr[temp] == 1)
        {
            arr[temp]--;
            counter--;

        }

    }
    cout<<maxa;

}