#include <iostream>
#include <list>

using namespace std;
int main()
{
    string x;
    cin>>x;
    int len = x.size();
    int o = 0;
    int dash =0;
    for (char ch :x)
    {
        if(ch == 'o')
            o++;
        if (ch =='-')
            dash ++;
    }
    
    if ( o == 1 || o == 0)
        cout<<"YES";
    else if(len %o == 0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}