#include <iostream>
#include <vector>
#include <string>
#include <map>


using namespace std;

int main()
{
    int x;
    cin>>x;
    string s;
    cin>>s;
    int a =0;
    int d =0;
    for (int i=0, j =s.size();i<j;i++)
    {
        if(s[i] =='A')
            a++;
        else
            d++;
    }
    if(a==d)
        cout<<"Friendship"<<endl;
    else if (a>d)
        cout<<"Anton"<<endl;
    else
        cout<<"Danik"<<endl;

}