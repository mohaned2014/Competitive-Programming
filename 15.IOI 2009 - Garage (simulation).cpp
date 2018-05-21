//16.	IOI 2009 - POI (sort)
#include <iostream>
#include <algorithm>    // std::min_element, std::max_element
#include <cmath>
using namespace std;

struct parking{
        parking(int i ,int Rs,int EMP)
        {
            id =i;
            Rate = Rs;
            slot =EMP;
        }
int id,Rate;
int slot;
};

struct cars{
    cars( int i , int Weighty)
    {
        id =i;
        Weight =Weighty;
    }
int id,Weight;
};


int waiting[2002];

int profit;
parking park [102] = parking(0,0,0);
cars car[2002] = cars(0,0);
int gate;

int main()
{
    int ParkSize,NoOfCars;
    cin>>ParkSize>>NoOfCars;

    for(int i =1;i<=ParkSize;i++)
    {
        park[i].id = i;
        cin>>park[i].Rate;
    }

    for(int i =1;i<=NoOfCars;i++)
    {
        car[i].id = i;
        cin>>car[i].Weight;
    }
    //arrival and leaving
    for(int i =1;i<=2*NoOfCars;i++)
    {
         cin>>gate;
        bool parked = false;
        //if entering
        if(gate> 0)
        {
            for(int j =1;j<=ParkSize;j++)
            {
                if(park[j].slot == 0 )
                {
                  park[j].slot = gate;

                  profit+=  (car[gate].Weight*park[j].Rate);
                  parked =true;

                  break;
                }
            }
            //no place in the parking
            if(!parked)
            {
                for(int m = 1; m<=NoOfCars;m++ )
                {
                    if(waiting[m] ==0)
                    {
                        waiting[m]=gate;
                        break;
                    }
                }
            }
        }
        else
        {
            int index =0;
            for(int j =1;j<=ParkSize;j++)
            {
                if(park[j].slot == abs(gate) )
                {
                  park[j].slot = 0;
                  index = j;
                  break;
                }
            }


            for(int m = 1; m<=NoOfCars;m++ )
            {
                if(waiting[m] > 0)
                {
                    park[index].slot = waiting[m];
                    profit+=  (car[waiting[m]].Weight)*park[index].Rate;
                    waiting[m]=-1;
                    break;
                }
            }

        }

    }
    cout<<profit;
}



