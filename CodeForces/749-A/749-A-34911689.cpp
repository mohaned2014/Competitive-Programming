#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

   int a;
   cin>>a;
   int counter =0;
   if (a %2 ==0)
      {
          counter += a/2;
        cout<<counter<<endl;

          for (int i=0;i <counter;i++)
          {
              cout<<2<<" ";
          }

      }
    else
    {
        a=a-3;
        counter =counter +1;
        if (a %2 ==0)
          {
              counter += a/2;
              cout<<counter<<endl;
                cout<<3<<" ";

              for (int i=0;i <counter-1;i++)
              {
                  cout<<2<<" ";
              }

          }

    }

}