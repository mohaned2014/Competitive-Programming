#include <iostream>
    #include <stdlib.h>
    using namespace std;

    int main() {
    long long x,y,z;
    cin>>x>>y>>z;

    if (z ==0){
        if(x==y)
        {
            cout<<"YES";
            return 0;
        }
        else{
            cout<<"NO";
            return 0;
        }

    }



    if ( x > y && z >0)
    {
        cout<<"NO";
        return 0;
    }
    if ( x < y && z < 0)
    {
        cout<<"NO";
        return 0;
    }

        if(abs(x-(y)) %abs(z) ==0)
        {
            cout<<"YES";
            return 0;
        }
        else
        {

            cout<<"NO";
            return 0;
        }


}