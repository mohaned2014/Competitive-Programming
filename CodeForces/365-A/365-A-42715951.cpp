#include <bits/stdc++.h >

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int ans = 0 ;
    for(int i = 0; i<n; i++) {
        int temp;
        cin>>temp;
        int arr[10] = {0};

        while(temp>0) {
            arr[temp%10] = 1;
            temp/=10;
        }
        bool good = true;
        for(int j = 0; j<=k; j++) {
            if(!arr[j])
                good = false;
        }
        if(good)
            ans++;
    }
    cout<<ans<<endl;
}