#include <iostream>


using namespace std;


bool isin(int arr[], int x ,int leni)
{
    for(int i =0; i < leni ;i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    int arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int leni = sizeof(arr)/4;

    int m;
    cin >>m;
    if (isin(arr,m,leni) == true)
    {
        cout<<"YES";
        return 0;
    }
    for (int i =0;i < 14;i++)
    {
        if (m %arr[i] == 0)
        {
            cout<<"YES";
            return 0;
        }

    }
    cout<<"NO";
    return 0;

}