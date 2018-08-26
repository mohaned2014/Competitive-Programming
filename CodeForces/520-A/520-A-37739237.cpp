#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int x;
    cin>>x;


    int a[123] ;
    memset(a, 0, 4*123);

    char m;
    for (int i =0; i<x;i++)
    {
        cin>>m;
        a[(int)m] =1;
    }
    if (x < 26)
    {
        cout<<"NO";
        return 0;
    }
    int counter =0;
    for(int i=65;i<97;i++)
    {
        if (a[i] > 0 && a[i+(97-65)] == 0)
            counter++;

    }
    for(int i=97;i<123;i++)
    {
        if (a[i] > 0)
            counter++;
    }

    if (counter ==26)
        cout<<"YES";
    else
        cout<<"NO"<<endl;
    return 0;

}