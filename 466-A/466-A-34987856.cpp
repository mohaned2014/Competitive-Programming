#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

 int no_of_rides_planed;
 int offer,price_one,price_offer;
 cin>>no_of_rides_planed>>offer>>price_one>>price_offer;
 int rides_needed_offer =0;
 int min_value =0;
 if (no_of_rides_planed % offer ==0)
 {
     rides_needed_offer = no_of_rides_planed / offer;
 }

 else
 {

    rides_needed_offer =( no_of_rides_planed / offer);
    int reminding_rides = no_of_rides_planed % offer;
    if (price_offer < (price_one*reminding_rides))
    {
        rides_needed_offer++;
    }
    else{
        min_value = price_one*reminding_rides;
    }
 }

 if( (price_offer * rides_needed_offer) < (no_of_rides_planed * price_one))

{
  min_value += (price_offer * rides_needed_offer);
 cout<<min_value;
 return 0;
}
else
{
    cout<<no_of_rides_planed * price_one;
    return 0;
}

}