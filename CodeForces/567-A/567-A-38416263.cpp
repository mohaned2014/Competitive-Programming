#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>      // std::setw
using namespace std;



int main()
{
    int n ;
    cin>>n;
    long long s[n] ;
    long long s2[n];
    long long mini,ans2;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        s2[i] =s[i];
    }
    for(int i=0;i<n;i++)
    {
        if ( i == 0)
            mini = abs(s[i]- s[i+1]);
        else if (i == n-1)
            mini = abs(s[i]- s[i-1]);
        else
        {
            if(abs(s[i]- s[i-1]) > abs(s[i]- s[i+1]))
            mini =abs(s[i]- s[i+1]);
            else
                mini =abs(s[i]- s[i-1]);
        }
            // mini = min(abs(s[i]- s[i-1])),abs(s[i]- s[i+1]));

         ans2 = max(abs(s[i]-s[0]),abs(s[i]-s[n-1]));
        cout<<mini<<" "<<ans2<<endl;

    }
}