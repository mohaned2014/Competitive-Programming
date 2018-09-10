#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    if(n==0){
        cout<<1<<endl;
        return 0;
    }
    n--;
    n= n%4;
    int mod = 8;
    for(int i = 0;i<n;i++){
        mod=mod*8;
        mod%=10;
    }
    cout<<mod<<endl;
    return 0;
}