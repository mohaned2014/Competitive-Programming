#include <iostream>
#include <cmath>
using namespace std;

int arr[28];
int main()
{
    string x ;
    getline(cin,x);
    for(int i =1; i<x.size()-1;i++)
    {
        if(isalpha(x[i])){
        int hashi = (int)x[i] -97;
        arr[hashi] ++;
        }
    }
    int counter =0;
    for(int i =0;i<26;i++)
    {
        if(arr[i]>0)
            counter++;
    }
    cout<<counter<<endl;

}