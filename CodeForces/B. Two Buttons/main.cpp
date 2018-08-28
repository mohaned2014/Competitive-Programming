#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> visited;
vector<int> indegree;
vector<int> level;
const int OO = INT_MAX;
const int numberofnodes = 2e4 + 1;
int bfs (int source , int destination) {
    level = vector<int>(numberofnodes , OO);
    queue<int> q;
    q.push(source);
    level[ source ] = 0;
    int curlevel = 1;
    while ( !q.empty()) {
        int sz = q.size();
        while ( sz-- ) {
            int node = q.front();
            q.pop();
            if ( node == destination ) {
                return curlevel - 1;
            }
            if ( 2 * node <= numberofnodes )
                adj[ node ].push_back(2 * node);
            if ( node - 1 <= numberofnodes )
                adj[ node ].push_back(node - 1);
            for ( auto child: adj[ node ] ) {
                if ( level[ child ] == OO ) {
                    q.push(child);
                    level[ child ] = curlevel;
                }
            }
        }
        curlevel++;
    }

}

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
    cin >> n >> m;
    adj = vector < vector < int >> (numberofnodes);
    visited = vector<int>(numberofnodes);
//    for ( int i = 0 ; i < m ; i++ ) {
//        int u , v;
//        cin >> u >> v;
//        adj[ u - 1 ].push_back(v - 1);
//        adj[ v - 1 ].push_back(u - 1);
//    }
    int x = bfs(n , m);
    cout << x << endl;
    return 0;
}