#include <bits/stdc++.h >

using namespace std;

int main() {
    int n;
    cin>>n;
    n++;
    vector<int> v(1001);
    for(int i =0;i<n-1;i++){
        int temp;
        cin>>temp;
        v[temp]++;
    }
    for(int i =0;i<=1000;i++){
        if(v[i]> (n/2) ){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
}