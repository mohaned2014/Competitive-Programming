#include <bits/stdc++.h >

using namespace std;

int main() {
    int n;
    cin>>n;
    int top ;
    cin>>top;
    top = 7-top;
    bool uniq = true;
    for(int i = 0 ; i< n;i++){
        int arr[7] = {0};
        arr[top] = 1;
        int a,b;
        cin>>a>>b;
        arr[a] = arr[b] = arr[7-a] = arr[7-b] = 1;
        int counter = 0 ;
        for(int j = 1; j<7 ;j++){
            if(!arr[j]){
                counter++;
                top = 7 - j;
            }
        }
        if(counter > 1){
            uniq = false;
        }
    }
    if(uniq)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}