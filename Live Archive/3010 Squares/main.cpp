#include <bits/stdc++.h>
using namespace std;
map<string , bool> visited;
vector<int> upleftClock (vector<int> v) {
    int temp = v[ 1 ];
    v[ 1 ] = v[ 0 ];
    v[ 0 ] = v[ 3 ];
    v[ 3 ] = v[ 4 ];
    v[ 4 ] = temp;
    return v;

}
bool isMagicBox (vector<int> &s) {
    int arr[3][3];
    int index = 0;
    for ( int i = 0 ; i < 3 ; i++ ) {
        for ( int j = 0 ; j < 3 ; j++ ) {
            arr[ i ][ j ] = s[ index++ ];
        }
    }
    if ( arr[ 0 ][ 0 ] + arr[ 0 ][ 1 ] + arr[ 0 ][ 2 ] == 15 && arr[ 1 ][ 0 ] + arr[ 1 ][ 1 ] + arr[ 1 ][ 2 ] == 15 &&
        arr[ 2 ][ 0 ] + arr[ 2 ][ 1 ] + arr[ 2 ][ 2 ] == 15
        && arr[ 0 ][ 0 ] + arr[ 1 ][ 0 ] + arr[ 2 ][ 0 ] == 15 && arr[ 0 ][ 1 ] + arr[ 1 ][ 1 ] + arr[ 2 ][ 1 ] == 15 &&
        arr[ 0 ][ 2 ] + arr[ 1 ][ 2 ] + arr[ 2 ][ 2 ] == 15 &&
        arr[ 0 ][ 0 ] + arr[ 1 ][ 1 ] + arr[ 2 ][ 2 ] == 15 && arr[ 0 ][ 2 ] + arr[ 1 ][ 1 ] + arr[ 2 ][ 0 ] == 15 )
        return true;
    else
        return false;

}
vector<int> upleftAntiClock (vector<int> v) {
    int temp = v[ 3 ];
    v[ 3 ] = v[ 0 ];
    v[ 0 ] = v[ 1 ];
    v[ 1 ] = v[ 4 ];
    v[ 4 ] = temp;
    return v;

}
vector<int> uprightClock (vector<int> v) {
    int temp = v[ 1 ];
    v[ 1 ] = v[ 4 ];
    v[ 4 ] = v[ 5 ];
    v[ 5 ] = v[ 2 ];
    v[ 2 ] = temp;
    return v;

}
vector<int> uprightAntiClock (vector<int> v) {
    int temp = v[ 1 ];
    v[ 1 ] = v[ 2 ];
    v[ 2 ] = v[ 5 ];
    v[ 5 ] = v[ 4 ];
    v[ 4 ] = temp;
    return v;

}
vector<int> downleftClock (vector<int> v) {
    int temp = v[ 4 ];
    v[ 4 ] = v[ 3 ];
    v[ 3 ] = v[ 6 ];
    v[ 6 ] = v[ 7 ];
    v[ 7 ] = temp;
    return v;

}

vector<int> downleftAntiClock (vector<int> v) {
    int temp = v[ 4 ];
    v[ 4 ] = v[ 7 ];
    v[ 7 ] = v[ 6 ];
    v[ 6 ] = v[ 3 ];
    v[ 3 ] = temp;
    return v;
}
vector<int> downRightClock (vector<int> v) {
    int temp = v[ 4 ];
    v[ 4 ] = v[ 7 ];
    v[ 7 ] = v[ 8 ];
    v[ 8 ] = v[ 5 ];
    v[ 5 ] = temp;
    return v;

}
vector<int> downrightAntiClock (vector<int> v) {
    int temp = v[ 4 ];
    v[ 4 ] = v[ 5 ];
    v[ 5 ] = v[ 8 ];
    v[ 8 ] = v[ 7 ];
    v[ 7 ] = temp;
    return v;

}
int MagicBox (vector<int> source) {
    queue<vector<int>> q;
    q.push(source);
    int curlevel = 1;
    while ( !q.empty()) {
        int sz = q.size();
        while ( sz-- ) {
            vector<int> node = q.front();
            q.pop();
            string s;
            for ( int i = 0 ; i < 9 ; i++ ) {
                s += ( char ) (node[ i ] + 48);
            }
            if ( visited[ s ] == true )
                continue;
            if ( isMagicBox(node)) {
                return curlevel - 1;
            }
            visited[ s ] = true;
            q.push(upleftAntiClock(node));
            q.push(upleftClock(node));
            q.push(uprightAntiClock(node));
            q.push(uprightClock(node));
            q.push(downleftAntiClock(node));
            q.push(downleftClock(node));
            q.push(downrightAntiClock(node));
            q.push(downRightClock(node));
        }
        curlevel++;
    }
}
int main () {
    string s;
    //freopen("D:\\cs\\problem solving\\Competitive-Programming\\input.txt" , "r" , stdin);

    while ( cin >> s && s.size() == 9 ) {
        visited.clear();
        vector<int> c(9);
        for ( int i = 0 ; i < 9 ; i++ ) {
            c[ i ] = ( int ) s[ i ] - 48;
        }
        int a = MagicBox(c);
        cout << a << " moves" << endl;
    }
}