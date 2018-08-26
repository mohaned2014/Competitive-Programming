//7. UVa 11498 - Division of Nlogonia * (just use if-else statements)
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>    // std::min_element, std::max_element

using namespace std;

int main()
{
    while(true){
        int x,x1,y1;
        cin>>x;
        if (!x)
            break;

        cin>>x1>>y1;
        for(int i =0;i<x;i++)
        {
            int a,b;
            cin>>a>>b;
            a=a-x1;
            b-=y1;
            if(a > 0 && b> 0)
                cout<<"NE\n";

            else if(a>0 &&b <0)
                cout<<"SE\n";
            else if (a < 0&& b >0)
                cout<<"NO\n";
            else if (a< 0 && b<0)
                cout<<"SO\n";
            else
                cout<<"divisa\n";

        }
    }
    return 0;
}
