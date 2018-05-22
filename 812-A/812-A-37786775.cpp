#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5][5];
    int part[5];
    for (int i = 1 ; i<=4;i++)
    {
        for (int j = 1 ; j<=4;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] ==1 && j !=4)
                part[i] =1;
        }
    }


    for (int i = 1 ; i<=4;i++)
    {
        for (int j = 1 ; j<=4;j++)
        {
            //left for part 1
            if (arr[1][1]==1 )
            {
                    part[4] = 1;
            }
            //left of part 2,3,4
            else if (arr[i][1]==1)
            {
                part[i-1] = 1;
            }
            //right for part 4
            if (arr[4][3] == 1)
            {
                part [1] =1;
            }
            //right for part 1,2,3
            else if (arr[i][3] == 1)
            {
                part [i+1] =1;
            }
            //straight
            if (arr[i][2] == 1)
            {
                if (i > 2)
                    part[i-2] = 1;
                else
                    part[i+2] =1;
            }

        }
    }
    for (int i=1;i<5 ;i++)
    {
        if (arr[i][4]==1 &&part[i] == 1)
        {
            cout<<"YES"<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;
    return 0;

}