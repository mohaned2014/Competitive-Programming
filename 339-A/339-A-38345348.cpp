#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string x;
    cin>>x;
    vector<int> v;
    for(int i=0,m=x.size();i<m;i++)
    {
        if(isdigit(x[i]))
            v.push_back((int)x[i] -48);
    }
    int w =v.size();
    sort(v.begin(),v.end());
    cout<<v[0];
    for(int i =1;i<v.size();i++)
        cout<<"+"<<v[i];


}