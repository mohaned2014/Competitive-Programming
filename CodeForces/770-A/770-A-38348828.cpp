#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x ,y;
    cin>>x>>y;
    int index =0;
    for(int i=0;i<x;i++)
    {
        index = i%y;
        cout<<(char)(index+97);
    }
    cout<<endl;



}