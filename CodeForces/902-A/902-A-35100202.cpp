#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{

   int x,y;
   int arr_first[101],arr_sec[101];
   cin>>x>>y;
   for(int i =0;i<x;i++)
   {
       cin>>arr_first[i];
       cin>>arr_sec[i];
   }
    bool last =false , first = false;
    for(int i =0;i<x;i++)
    {
        if(arr_sec[i] >= y)
        {
            last =true;
        }
        if(arr_first[i] == 0)
        {
            first =true;
        }
    }
    if ( (last != true ) ||( first !=true ) )
    {
        cout<<"NO";
        return 0;
    }
    int pos = arr_sec[0];
    for (int i=0 ; i<x;i++)
   {

       if (pos >= arr_first[i+1]  )
       {
        pos = max(pos,arr_sec[i+1]);
       }

   }
    if (pos >= y)
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