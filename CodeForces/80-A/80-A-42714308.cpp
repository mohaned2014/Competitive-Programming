#include <bits/stdc++.h >

using namespace std;

int main()
{
    vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n,m;
    cin>>n>>m;
    auto it = upper_bound(primes.begin(),primes.end(),n);
    if(m==(*it))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}