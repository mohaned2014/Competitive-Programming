// created by Mohaned-elhaddad

#include <bits/stdc++.h>
using namespace std;
vector<bool> visited;
void dfs ( int node, int parent, vector<vector<int> > &adj ) {
     if ( visited[node] )
          return;

     visited[node] = 1;
     for ( int i = 0; i < adj[node].size(); i++ ) {
          int child = adj[node][i];
          if ( parent != child )
               dfs ( child, node, adj );
     }

}
int number_of_components ( vector<vector<int> > &adj ) {
     int counter = 0;
     for ( int i = 0; i < adj.size(); i++ ) {
          if ( !visited[i] ) {
               //cout<<counter<<endl;
               counter++;
               dfs ( i, -1, adj );
          }
     }
     return counter;
}
int main() {
     int n ;
     cin >> n;
     vector<pair<int, int>> points ( n );
     vector<vector<int>> adj ( n );
     visited = vector<bool> ( n );
     for ( int i = 0; i < n ; i++ ) {
          int u, v;
          cin >> u >> v;
          points[i].first = u;
          points[i].second = v;
     }
     for ( int i = 0; i < n - 1 ; i++ ) {
          int x1 = points[i].first;
          int y1 = points[i].second;
          for ( int j = i + 1; j < n; j++ ) {
               if ( i == j )
                    continue;
               int x2 = points[j].first;
               int y2 = points[j].second;
               if ( x1 == x2 || y1 == y2 ) {
                    adj[i].push_back ( j );
                    adj[j].push_back ( i );
               }
          }
     }
     int ans = number_of_components ( adj );
     cout << ans-1 << endl;
}