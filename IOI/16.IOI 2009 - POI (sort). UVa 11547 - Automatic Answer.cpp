//16.	IOI 2009 - POI (sort)
#include <iostream>
#include <algorithm>    // std::min_element, std::max_element

using namespace std;

struct contestant{
     contestant(int s , int p , int i){
     Score =s; problemSolved = p; id =i;
     }
int Score,problemSolved,id;

};
    contestant z[2002] = contestant(0,0,0);
    int Matrix[2002][2002];
    int Points[20,02];
    bool operator<(contestant a , contestant b)
    {
        if (a.Score > b.Score)
            return true;
        if (a.Score < b.Score)
            return false;
        if (a.problemSolved > b.problemSolved)
            return true;
        if (a.problemSolved < b.problemSolved)
            return false;
        return a.id < b.id;
    }
int main()
{


    int NoOfCont,NoOfProb,Philip;
    cin>>NoOfCont>>NoOfProb>>Philip;

    for (int i =1;i<=NoOfCont ; i++)
    {
         z[i] = contestant(0,0,i);
        for(int j = 1;j<=NoOfProb;j++ )
        {
            cin>>Matrix[i][j];
            if (!Matrix[i][j])
                Points[j]++;
        }

    }

    for (int i =1;i<=NoOfCont ; i++)
    {
        for(int j = 1;j<=NoOfProb;j++ )
        {
            if (Matrix[i][j])
            {
                z[i].Score+=Points[j];
                z[i].problemSolved++;
            }
        }
    }
    sort(z+1, z+NoOfCont+1 );

    for (int i =1;i<=NoOfCont ; i++)
    {
        if (z[i].id == Philip)
            cout<<z[i].Score<<" "<<i<<endl;
    }





}
