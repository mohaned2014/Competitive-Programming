#include <iostream>
#include <vector>
#include <queue>

using std::vector;
using std::queue;
using namespace std;
vector<int> visited;
vector < vector<int>>adj;
// 1 is red
// 2 is blue
int bipartite ( int node, int ParentColor = 0, int parent = -1 ) {
     int NodeColor = ParentColor == 1 ? 2 : 1 ;
     //visited before and no contradiction
     if ( visited[node] == NodeColor && visited[node] )
          return 0;
     //visited before and there is contradiction
     if ( visited[node] && NodeColor != visited[node] ) {
          return 1;
     }
     visited[node] = NodeColor;
     int cnt = 0;
     for ( int i = 0; i < adj[node].size(); i++ ) {
          int ng = adj[node][i];
          if ( ng != parent )
               cnt += bipartite ( ng, NodeColor, node );
     }
     return cnt;
}

int main() {
     int n, m;
     int t;
     cin >> t;
     for(int k = 1;k<=t;k++)  {
          std::cin >> n >> m;
          adj.clear();
          visited.clear();
          adj = vector<vector<int> > ( n, vector<int>() );
          visited = vector<int> ( n );
          for ( int i = 0; i < m; i++ ) {
               int x, y;
               std::cin >> x >> y;
               adj[x - 1].push_back ( y - 1 );
               adj[y - 1].push_back ( x - 1 );
          }
          bool bipar = true ;
          for ( int i = 0; i < n; i++ ) {
            if ( !visited[i] &&bipartite ( i ) ){
                bipar =false;
                break;
            }
          }
          cout<<"Scenario #"<<k<<":"<<endl;
          if(!bipar)
            cout<<"Suspicious bugs found!"<<endl;
          else
            cout<<"No suspicious bugs found!"<<endl;
     }
}
