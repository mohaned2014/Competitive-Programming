//9.	UVa 11727 - Cost Cutting * (sort the 3 numbers and get the median)
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>    // std::min_element, std::max_element

using namespace std;

int main()
{
        int x;
        cin>>x;


        for(int i =0;i<x;i++)
        {
            int arr[3];
            cin>>arr[0]>>arr[1]>>arr[2];
            int *mini = min_element(arr,arr+3);
            int *maxi = max_element(arr,arr+3);
            for (int j =0;j<3;j++)
            {
                if (arr[j] != *mini && arr[j] != *maxi)
                {
                    cout<<"Case "<<i+1<<": "<<arr[j]<<endl;
                }
            }

        }
    return 0;
}
