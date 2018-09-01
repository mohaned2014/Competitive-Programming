#include <bits/stdc++.h>
using namespace std;
#define  ll long long

const int OO = INT_MAX;
const int numberofnodes = 2e4 + 5;
const int N = 11111;
vector<int> level;
vector<bool> visited;

bool p[N + 9];
int seive () {
    for ( int i = 2 ; i <= N ; i++ )
        p[ i ] = 1;

    p[ 0 ] = p[ 1 ] = 0;
    for ( int i = 1 ; i <= N ; i++ ) {
        if ( p[ i ] )
            for ( ll j = ( ll ) i * i ; j <= N ; j += i )
                p[ j ] = 0;
    }
}

int bfs (int source , int destination) {
    queue<int> q;
    q.push(source);
    int curlevel = 1;
    while ( !q.empty()) {
        int sz = q.size();
        while ( sz-- ) {

            int node = q.front();
            visited[ node ] = 1;
            q.pop();
            if ( node == destination ) {
                return curlevel - 1;
            }
            //fourth
            for ( int i = 1000 + (node % 1000) , temp = i ; i <= temp + 9000 ; i += 1000 )
                if ( p[ i ] && !visited[ i ] ) {
                    q.push(i);
                }
            //third
            for ( int i = node - (node % 1000) + (node % 100) , temp = i ; i <= temp + 900 ; i += 100 )
                if ( p[ i ] && !visited[ i ] ) {
                    q.push(i);
                }
            //second digit
            for ( int i = node - (node % 100) + (node % 10) , temp = i ; i <= temp + 90 ; i += 10 )
                if ( p[ i ] && !visited[ i ] ) {
                    q.push(i);
                }

            //first digit
            for ( int i = node - (node % 10) , temp = i ; i <= temp + 9 ; i++ )
                if ( p[ i ] && !visited[ i ] ) {
                    q.push(i);
                }
        }
        curlevel++;
    }

}

int main () {
    int T;
    cin >> T;
    seive();
    while ( T-- ) {
        int a , b;
        cin >> a >> b;
        visited.clear();
        visited = vector<bool>(numberofnodes);
        cout << bfs(a , b) << endl;

    }
    return 0;
}