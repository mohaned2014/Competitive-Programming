#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> visited;
vector<int> indegree;

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
int uniqueTopoSort (vector<int> &chosen , int n) {
    if ( chosen.size() == n ) {
        return 1;
    }
    //return number of toposorts break after 2
    int ret = 0;
    for ( int node = 0 ; node < adj.size() ; node++ ) {

        if ( !visited[ node ] && indegree[ node ] == 0 && ret < 2 ) {
            visited[ node ] = 1;
            chosen.push_back(node);
            for ( auto child : adj[ node ] ) {
                indegree[ child ]--;
            }
            ret += uniqueTopoSort(chosen , n);

            for ( auto child : adj[ node ] ) {
                indegree[ child ]++;
            }
            chosen.pop_back();
            visited[ node ] = 0;

        }
    }
    return ret;
}
int main () {
    //freopen("D:\\cs\\problem solving\\Competitive-Programming\\input.txt" , "r" , stdin);
    int n , m;
    while ( cin >> n >> m && (n != 0 || m != 0)) {

        adj = vector < vector < int >> (n);
        visited = vector<int>(n);
        indegree = vector<int>(n);
        for ( int i = 0 ; i < m ; i++ ) {
            int u , v;
            cin >> u >> v;
            adj[ u - 1 ].push_back(v - 1);
            indegree[ v - 1 ]++;
        }
        bool cyc = false;
        for ( int i = 0 ; i < n ; i++ ) {
            if ( !visited[ i ] ) {
                cyc = DirectedCycle(i);
            }
            if ( cyc )
                break;
        }
        if ( cyc )
            cout << 0 << endl;
        else {
            visited = vector<int>(n);
            vector<int> chosen;
            int ans = uniqueTopoSort(chosen , n);
            if ( ans > 2 )
                ans = 2;
            cout << ans << endl;
        }
    }
    return 0;
}