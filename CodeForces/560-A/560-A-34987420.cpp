#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

  int n;
  cin>>n;
  int temp;
  bool x= true;
  for (int i=0 ;i<n;i++)
  {
      cin>>temp;
      if (temp == 1)
      {
          x =false;
      }
  }

        if (x == false)
      {
          cout<<-1;
          return 0;
      }
      else
      {
          cout<<1;
      }



}