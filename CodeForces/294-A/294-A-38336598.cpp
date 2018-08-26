#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int arr[103];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    int x;
    cin>>x;
    int a,y;
    for(int i=1;i<=x;i++)
    {
        cin>>a>>y;
        arr[a-1] +=y-1;
        arr[a+1] += (arr[a]-y);
        arr[a] =0;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }


}