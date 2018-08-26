#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    long long sum = 0;
    int x ;
    cin>>x;

    long* a = new long[x] ;

    for (int i =0;i<x;i++){
        cin >>a[i];
        sum += a[i];
    }
        sort(a , a+x);

    if (sum % 2 ==0)
        cout<<sum;
    else
        {
            for (int i =0;i<x;i++){
                if(a[i] % 2 != 0){
                    sum -=a[i];
                    cout<<sum;
                    return 0;
                }
        }
        cout<<0;


    }
}