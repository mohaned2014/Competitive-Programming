#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{

   int n;
   cin>>n;
   char arr[13];

   int arrCounter[13];
   for (int j=1;j<13;j++)
        {

                arrCounter[j] =0;

        }

   for (int i=0;i<n;i++)
   {
    bool onetwel =false;
   bool two6 =false;
   bool three4 =false;
   bool four3 =false;
   bool sixtwo =false;
   bool twelone =false;

arrCounter[2] = 0;

        for (int j=1;j<13;j++)
        {
            cin>>arr[j];
            if (arr[j] == 'X')
            {

                arrCounter[2]++;
            }
        }
        int maxim = 0;
        for (int j=1;j<13;j++)
        {

             int countera =0;

            if (arr[j]=='X' )
            {
             onetwel =true;
             arrCounter[1] ++;
            // cout<<"i is"<<j<<"while 1"<<endl;
                             countera++;

            }
for (int s=1;s<13;s++)
        {
            if (arr[s]=='X' && arr[s+6] =='X' )
            {
                two6 =true;
                             //cout<<"i is"<<j<<"while 2"<<endl;

                             countera++;
                break;
            }
        }
        for (int s=1;s<13;s++)
        {
            if (arr[s]=='X' && arr[s+3] =='X' &&  arr[s+6]=='X' && arr[s+9] =='X'  )
            {
                four3 =true;
              //               cout<<"i is"<<j<<"while 3"<<endl;

                             countera++;
                             break;

                  }
                    }
                       for (int s=1;s<13;s++)
{

            if (arr[s]=='X' && arr[s+4] =='X' &&  arr[s+8]=='X')
            {
                three4 =true;
                //             cout<<"i is"<<j<<"while 4"<<endl;

                             countera++;
break;
            }
}
        for (int s=1;s<13;s++)
{

            if (arr[s]=='X' && arr[s+2] =='X' &&  arr[s+4]=='X' && arr[s+6] =='X' && arr[s+8] =='X' && arr[s+10] =='X'  )
            {
                sixtwo =true;
                             countera++;
            break;
            }
}
            if (arrCounter[2] == 12 )
            {
                twelone =true;
                                countera++;

            }
            if(countera >= maxim)
            {
                maxim =countera;
            }

        }
    if( twelone != true)
    {

    cout<<maxim<<" ";
    }
    else
    {
        cout<<6<<" ";
    }
    if (onetwel == true)
    {
        cout<<"1x12 ";
    }
    if (two6 == true)
    {
        cout<<"2x6 ";
    }
    if (three4 == true)
    {
        cout<<"3x4 ";
    }
    if (four3 == true)
    {
        cout<<"4x3 ";
    }
        if (sixtwo == true)
    {
        cout<<"6x2 ";
    }
        if (twelone == true)
    {
        cout<<"12x1 ";
    }
    cout<<endl;
   }

}