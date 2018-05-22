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
    string s;
    cin>>s;
    int pointer = 1;
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        int no =(int) s[i] -96;
        if(pointer <= no)
        {
            if(no- pointer <=13)
                sum+=no- pointer;
            else
                sum+= (26-no)+pointer;
        }
        else
        {
            if(pointer-no <=13)
                sum+= pointer -no;
            else
                sum+= (26-pointer)+no;

        }
        pointer = no;
    }
    cout<<sum;


}