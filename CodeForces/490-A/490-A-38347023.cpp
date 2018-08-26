#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int arr[5005];
int arrfreq[5];
int main()
{
    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        cin>>arr[i];
        arrfreq[arr[i]] ++;
    }
    int mini = min( (min(arrfreq[1],arrfreq[2])) , arrfreq[3]);
    cout<<mini<<endl;
    int index1=1,index2=1,index3=1;
    for(int i =0;i< mini ;i++)//5000 o(n)
    {
        while(index1<=x)
        {
            if(arr[index1]==1)
            {
                cout<<index1<<" ";
                arr[index1] = -1;
                index1++;
                break;
            }
            index1++;
        }
        while(index2<=x)
        {
            if(arr[index2]==2)
            {
                cout<<index2<<" ";
                arr[index2] = -1;
                index2++;
                break;
            }
            index2++;
        }
        while(index3<=x)
        {
            if(arr[index3]==3)
            {
                cout<<index3<<" ";
                arr[index3] = -1;
                index3++;
                break;
            }
            index3++;
        }
        cout<<endl;
    }


}