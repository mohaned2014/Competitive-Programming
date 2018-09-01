#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> adj;
vector<vector<int>> visited;
vector<int> indegree;
vector<vector<int>> level;
const int OO = 20000;
const int numberofnodes = 2e4 + 1;
bool isvalid (int i , int j , int n , int m) {
    if ( i < 0 || j < 0 || i >= n || j >= m )
        return false;
    return true;
}
void bfs (int n , int m) {
    queue<pair<int , int>> q;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < m ; j++ )
            if ( adj[ i ][ j ] == '1' ) {
                q.push(make_pair(i , j));
                level[ i ][ j ] = 0;
            }
    }
    int curlevel = 1;
    while ( !q.empty()) {
        int sz = q.size();
        while ( sz-- ) {
            pair<int , int> node = q.front();
            q.pop();
            int i = node.first;
            int j = node.second;

            if ( isvalid(i + 1 , j , n , m) && level[ i + 1 ][ j ] == OO ) {
                q.push(make_pair(i + 1 , j));
                //cout<<i<<"      "<<j<<endl;

                level[ i + 1 ][ j ] = curlevel;
            }
            if ( isvalid(i - 1 , j , n , m) && level[ i - 1 ][ j ] == OO ) {
                q.push(make_pair(i - 1 , j));
              //  cout<<i<<"      "<<j<<endl;

                level[ i - 1 ][ j ] = curlevel;
            }

            if ( isvalid(i , j + 1 , n , m) && level[ i ][ j + 1 ] == OO ) {
                q.push(make_pair(i , j + 1));
             //   cout<<i<<"      "<<j<<endl;
                level[ i ][ j + 1 ] = curlevel;
            }

            if ( isvalid(i , j - 1 , n , m) && level[ i ][ j - 1 ] == OO ) {
                q.push(make_pair(i , j-1));
                level[ i ][ j - 1 ] = curlevel;
            }

        }
        curlevel++;
    }

}
int main () {
    //freopen("D:\\cs\\problem solving\\Competitive-Programming\\input.txt" , "r" , stdin);
    int T;
    cin >> T;
    while ( T-- ) {
        int n , m;
        cin >> n >> m;
        adj = vector<vector<char>>(n , vector<char>(m));
        level = vector<vector<int>>(n , vector<int>(m));
        for ( int i = 0 ; i < n ; i++ ) {
            for ( int j = 0 ; j < m ; j++ )
                level[ i ][ j ] = OO;
        }
        visited = vector<vector<int>>(n , vector<int>(n));
        for ( int i = 0 ; i < n ; i++ ) {
            for ( int j = 0 ; j < m ; j++ )
                cin >> adj[ i ][ j ];
        }
        bfs(n , m);
        for ( int i = 0 ; i < n ; i++ ) {
            for ( int j = 0 ; j < m - 1; j++ )
                cout << level[ i ][ j ] << " ";

            cout << level[i][m-1]<< endl;
        }
    }

//    for ( int i = 0 ; i < m ; i++ ) {
//        int u , v;
//        cin >> u >> v;
//        adj[ u - 1 ].push_back(v - 1);
//        adj[ v - 1 ].push_back(u - 1);
//    }

    return 0;
}