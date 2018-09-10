#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<vector<char>>arr(n,vector<char>(n)) ;
    for(int i = 0 ; i < n ; i++ )
        for(int j = 0 ; j <n ; j++)
            cin>>arr[i][j];
    set<char>diagonal;
    set<char>rest;
    for(int i = 0 ; i < n ; i++ ) {
        for(int j = 0 ; j <n ; j++) {
            if(i==j||i+j==n-1) {
                diagonal.insert(arr[i][j]);
                if(diagonal.size()>1) {
                    cout<<"NO\n";
                    return 0;
                }
            }
            else{
                rest.insert(arr[i][j]);
                if(rest.size()>1) {
                    cout<<"NO\n";
                    return 0;
                }
            }
        }
    }
    if(*rest.begin()!=*diagonal.begin())
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
