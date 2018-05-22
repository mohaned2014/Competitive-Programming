#include <iostream>
    #include <vector>
    #include <string>
    #include <map>


    using namespace std;

    int main()
    {
        int x ,y;
        cin>>x>>y;
        int counter =0;
        while(x<= y)
        {
            x*=3;
            y*=2;
            counter++;
        }
        cout<<counter<<endl;

    }