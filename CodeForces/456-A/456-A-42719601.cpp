#include <bits/stdc++.h >

using namespace std;
struct lap {
    int first;
    int second;
};
bool compare ( lap a, lap b ) {
    return  a.first < b.first ;
}
int main() {
    int n;
    cin >> n;
    vector<lap > laps ( n );
    for ( int i = 0; i < n; i++ ) {
        cin >> laps[i].first >> laps[i].second;
    }
    sort ( laps.begin(), laps.end(), compare );
    for ( int i = 0; i < n - 1; i++ ) {
        if ( laps[i].second > laps[i + 1].second ) {
            cout << "Happy Alex\n";
            return 0;
        }
    }
    cout << "Poor Alex\n";
}