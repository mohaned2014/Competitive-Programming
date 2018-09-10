#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int angle;
        cin>>angle;
        //exterior angle = 180 - interior angle
        //sum of exteriors angle = 360
        // any exterior angle = 360 / n
        // 360/exterior angle should be n (integer)
        angle = 180 - angle;
        if(360%angle ==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}