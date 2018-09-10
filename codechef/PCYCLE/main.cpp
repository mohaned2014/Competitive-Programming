#include <bits/stdc++.h>

using namespace std;
vector<vector<int>>adj;
vector<bool>visited;
vector<vector<int>> ans;
void dfs(int node,vector<int> &chosen) {
    chosen.push_back(node);
    if(visited[node]) {
        ans.push_back(chosen);
        return;
    } else {
        visited[node] = true;
        for (auto child : adj[node]) {
            dfs(child,chosen);
        }
    }

}
int main() {
    int n;
    cin>>n;
    adj = vector<vector<int>> (n);
    visited = vector<bool> (n);
    for(int i = 0 ; i<n; i++) {
        int v ;
        cin >> v;
        adj[i].push_back(v-1);
    }
    int counter =0;
    for(int i =0 ; i<n; i++) {
        if(!visited[i]) {
            counter++;
            vector<int>chosen;
            dfs(i,chosen);
        }
    }
    cout<<ans.size()<<endl;
    for(int j = 0; j<ans.size(); j++) {
        for(int i =0 ; i<ans[j].size(); i++) {
            cout<<ans[j][i]+1<<" ";
        }
        cout<<endl;
    }
}
