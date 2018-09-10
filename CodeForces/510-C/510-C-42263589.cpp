#include <bits/stdc++.h>
using namespace std;
vector<int> visited;
vector<vector<int>> adj;
bool DirectedCycle (int node) {
    // return true if there is a cycle in directed graph
    if ( visited[ node ] == 1 )//there is a cycle
        return true;
    if ( visited[ node ] == 2 )
        return false;
    visited[ node ] = 1;// visited and under processing
    for ( auto child : adj[ node ] ) {
        if ( DirectedCycle(child))
            return true;
    }
    visited[ node ] = 2;// visited and done processing
    return false;
}
stack<int> sorted;
void dfs (int node) {
    if ( visited[ node ] )
        return;
    visited[ node ] = 1;
    for ( auto child :adj[ node ] ) {
        dfs(child);
    }
    sorted.push(node);
}
int main () {
    int n;
    cin >> n;
    vector<string> arr;
    adj = vector<vector<int>>(26);
    visited = vector<int>(26);
    while ( n-- ) {
        string s;
        cin >> s;
        arr.push_back(s);
    }
    bool cyc = false;

    for ( int i = 0 ; i < arr.size()-1 ; i++ ) {
        for ( int j = 0 ; j < min(arr[i].size(),arr[i+1].size())  ; j++ ) {
            int u = (int) (arr[ i ][ j ] -97);
            int v = (int) (arr[ i+1 ][ j  ]-97);
            if ( u != v ) {
                adj[ u ].push_back(v);
                break;
            } else {
                  if(cyc)
                    break;
                  if (j==min(arr[i].size(),arr[i+1].size())-1){
                    cyc = arr[i].size() > arr[i+1].size();

                  }
                continue;
            }
        }
    }
    for ( int i = 0 ; i < 26 ; i++ ) {
        if ( !visited[ i ] &&DirectedCycle(i))
            cyc = true;
    }
    if ( cyc )
        cout << "Impossible" << endl;
    else {
        visited.resize(0);
        visited = vector<int>(26);
        for ( int i = 0 ; i < 26 ; i++ ) {
            if ( !visited[ i ] )
                dfs(i);
        }
    }
    while ( !sorted.empty()) {
        cout << ( char ) (sorted.top() + 97);
        sorted.pop();
    }
    cout << endl;

}