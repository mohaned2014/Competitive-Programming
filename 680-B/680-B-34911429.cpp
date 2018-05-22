#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
   int n ,a;
    int t[101];
   cin>>n>>a;
   int counter =0;
    for (int i=1;i<n+1;i++)
    {
        cin>>t[i];
    }
    int one = 0;

    for (int i=1;i<n+1;i++)
    {

       if ( t[i] == 1)
        {
            one ++;//         cout<<i<<"q"<<endl;

          int smallDist = abs(a-i);
          int f = a+smallDist ;
          int w = a - smallDist ;
          if (smallDist == 0)
          {
              counter ++;
                      //cout<<i<<"m"<<endl;
            t[i] --;
          }
          else if (smallDist > (a-1))
          {
              counter ++;
        //cout<<i<<"x"<<endl;
                t[i]--;
          }
          else if ( smallDist > (n-a))
          {
              counter ++;
              t[i] --;
          }
          else if ((t[f] + t[w] ) == 2)
          {
              counter =counter +2;
                t[f] --;
                t[w] --;

          }

        }
    }
    if (one ==1 )
    {
        cout<<1;
        return 0;
    }
cout<<counter<<endl;
}