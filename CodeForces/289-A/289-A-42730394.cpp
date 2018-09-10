#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int dif = 0;
    for(int i = 0 ; i<n;i++){
        int a,b;
        cin>>a>>b;
        dif += (b-a)+1;
    }
    int div = (dif-1)/k;
    int ans = (( div+1)* k ) - dif;
    cout<<ans<<endl;
}