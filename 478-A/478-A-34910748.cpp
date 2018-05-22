#include <iostream>

using namespace std;

int main() {
    int x,y,z,j,k;
    cin>>x>>y>>z>>j>>k;
    int sum = x+y+z+j+k;
    if (sum %5 ==0 && sum !=0)
    {
        cout<<sum/5;
    }
    else
    {
        cout<<-1;
    }
    
}