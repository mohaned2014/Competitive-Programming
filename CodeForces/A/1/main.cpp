#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x,y,a;
    cin>>x>>y>>a;
    long long ans = ceil(x/a)*ceil(y/a);
    cout<<ans<<endl;
    return 0;
}
