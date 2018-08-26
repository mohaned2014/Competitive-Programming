#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <deque>


using namespace std;

int main()
{
    int x;
    cin>>x;
    int temp;
    int sum =0;
    int sum2=0;
    for(int i=0;i<x;i++)
    {
        cin>>temp;
        if(temp >0)
            sum +=temp ;
        else if(temp <0 && sum >0)
            sum--;
        else
            sum2++;
    }
    cout<<sum2<<endl;


}