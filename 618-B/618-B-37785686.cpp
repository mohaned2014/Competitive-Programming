#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int maxi ;
    int* arrmax = new int[n];
    int arr[52][52];
    bool first = true;
    for(int i =0 ;i<n ;i++)
    {
        for(int j =0; j <n ;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i =0 ;i<n ;i++)
    {
        maxi = arr[i][i];

        for(int j =0; j <n ;j++)
        {

            if (arr[j][i] > maxi)
                maxi =arr[j][i];
        }
        arrmax[i] = maxi;
    }
    for (int i =0;i<n-1;i++){
        if (arrmax[i] == n-1 && first == true){
            cout<<arrmax[i]+1<<" ";
            first =false;
        }
        else{
        cout<<arrmax[i]<<" ";
        }
    }
    cout<<arrmax[n-1];
    free(arrmax);
}