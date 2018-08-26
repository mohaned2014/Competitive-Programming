#include <string>
using namespace std;
#include <cctype>
#include <vector>

#include <iostream>

int main()
{
    string x;
    cin>>x;
    vector<char> vec;
    for(decltype(x.size()) i =0;i<x.size();i++)
    {
        int counter =0;
        for(decltype(x.size()) j =0;j<x.size();j++)
        {
            if(x[i]==x[j] && i!=j&&x[i] != '1'){
                counter++;
                x[j]='1';
            }
        }
        if(x[i] != '1')
            vec.push_back(x[i]);


    }

    //IsInVec(x,x[4]);
    if (vec.size() %2 ==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;


}