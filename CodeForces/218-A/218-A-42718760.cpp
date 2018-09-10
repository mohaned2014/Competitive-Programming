#include <bits/stdc++.h >

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int>  points ( ( 2 * n ) + 1 );
    for ( int i = 0; i < ( 2 * n ) + 1 ; i++ )
        cin >> points[i];
    for ( int i = 0, counter = 0; i < ( 2 * n ) + 1 && counter < k ; i++ ) {
        if ( i % 2 != 0 ) { //peek
            if ( points[i] - 1 > points[i - 1] && points[i] - 1 > points[i + 1] ) {
                points[i]--;
                counter++;
            }
        }
    }
    for ( int i = 0; i < ( 2 * n ) + 1 ; i++ )
        cout<< points[i] <<" ";
    cout<<endl;
}