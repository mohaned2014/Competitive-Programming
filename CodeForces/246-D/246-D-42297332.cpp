#include <bits/stdc++.h>
using namespace std;

const int q = 120000;
vector<int> nodescolors(q);

int main () {
     int n, m;
     cin >> n >> m;
    int bigColor = q;
    vector<set<int>> s(q);
     for ( int i = 1; i <= n; i++ ) {
            cin>>nodescolors[i];
            bigColor=min(bigColor,nodescolors[i]);
     }
     for ( int i = 0; i < m; i++ ) {
          int u, v;
          cin >> u >> v;
          int FirstColor = nodescolors[u];
          int SecColor = nodescolors[v];
          if ( FirstColor != SecColor ) {
               s[FirstColor].insert(SecColor);
               s[SecColor].insert(FirstColor);
          }
     }
     int bigValue = 0;
     for(int i = 1;i<=q;i++){
        if(s[i].size() > bigValue){
            bigValue = s[i].size();
            bigColor = i;
        }
     }
     cout<<bigColor<<endl;

}