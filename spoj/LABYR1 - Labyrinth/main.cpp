#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> adj;
vector<vector<int>> visited;


void dfs (int i , int j , int n , int m , int dis = 0) {
    if ( i < 0 || j < 0 || i >= n || j >= m ||adj[i][j]!='.' )
        return;
    if ( visited[ i ][ j ] )
        return;
    visited[ i ][ j ] = dis;
    dfs(i + 1 , j , n , m , dis + 1);
    dfs(i - 1 , j , n , m , dis + 1);
    dfs(i , j + 1 , n , m , dis + 1);
    dfs(i , j - 1 , n , m , dis + 1);
}

int main () {
    //freopen("D:\\cs\\problem solving\\Competitive-Programming\\input.txt" , "r" , stdin);
    int T;
    cin >> T;
    int q = 1111;
    while ( T-- ) {
        int n , m;
        cin >> m >> n;
        visited.clear();
        adj.clear();
        adj = vector<vector<char>>(q , vector<char>(q));
        visited = vector<vector<int>>(q , vector<int>(q));
        for ( int i = 0 ; i < n ; i++ ) {
            for ( int j = 0 ; j < m ; j++ )
                cin>>adj[ i ][ j ];
        }

        for ( int i = 0 ; i < n ; i++ ) {
            for ( int j = 0 ; j < m ; j++ ) {
                dfs(i , j , n , m);
            }
        }

        int maxi = 0;
        int  max_i,max_j;
        for ( int i = 0 ; i < n ; i++ ) {
            for ( int j = 0 ; j < m ; j++ ) {
                if(visited[i][j]>=maxi&&adj[i][j]=='.'){
                    max_i = i;
                    max_j = j;
                    maxi = visited[i][j];
                }
            }
        }
        visited.clear();
        visited = vector<vector<int>>(q , vector<int>(q));

        dfs(max_i , max_j , n , m);
        for ( int i = 0 ; i < n ; i++ ) {
            for ( int j = 0 ; j < m ; j++ ) {
                if(visited[i][j]>=maxi&&adj[i][j]=='.'){
                    max_i = i;
                    max_j = j;
                    maxi = visited[i][j];
                }
            }
        }
        cout<<"Maximum rope length is "<<maxi<<"."<<endl;
    }
}
