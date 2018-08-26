//8.	UVa 11547 - Automatic Answer (a one liner O(1) solution exists)
    #include <iostream>
    #include <stdio.h>
    #include <cmath>
    #include <algorithm>    // std::min_element, std::max_element

    using namespace std;

    int main()
    {
            int x;
            cin>>x;


            for(int i =0;i<x;i++)
            {
                int a;
                cin>>a;
                a=(((a*63)+7492) *5)-498;
                a= a/10;
                a = a%10;
                cout<<abs(a)<<endl;
            }
        return 0;
    }
