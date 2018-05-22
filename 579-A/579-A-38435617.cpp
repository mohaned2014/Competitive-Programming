#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>      // std::setw
using namespace std;



int main(){
    int x;
    cin>>x;
    int counter=0;
    while(x>0)
    {
        if(x==1)
        {
            counter++;
            break;
        }
        int i=0;
        while(x>pow(2,i))i++;
        if(x!=pow(2,i))
            i--;
        x=x-pow(2,i);
        counter++;
    }
    cout<<counter<<endl;
}