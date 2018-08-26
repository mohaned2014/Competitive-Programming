#define ll long long
#define vvi vector<vector<int> >
#define vi vector<int>

#include<bits/stdc++.h>

using namespace std;
vvi adj;
vector<int> visited;
vector <vector<char>> arr;

int x = 0;
int y = 0;

bool IsValid(int i, int j, int m, int n) {
    if (i >= m || i < 0 || j >= n || j < 0)
        return false;
    return true;
}

// 1 is red
// 2 is blue
int dfs(int node, int ParentColor = 0, int parent = -1) {
    int NodeColor = ParentColor == 1 ? 2 : 1;
    //visited before and removed or visited before and no contradiction
    if (visited[node] == 3 || visited[node] == NodeColor)
        return 0;
    //visited before and there is contradiction
    if (visited[node] && NodeColor != visited[node]) {
        visited[parent] = 3;//marked as removed
        return 1;
    }
    visited[node] = NodeColor;
    int cnt = 0;
    for (int i = 0; i < adj[node].size(); i++) {
        int ng = adj[node][i];
        if (ng != parent)
            cnt += dfs(ng, NodeColor, node);
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    int x;
    int arr[101] = {0};
    cin >> x;
    for (int i = 0; i < x; i++) {
        int temp;
        cin >> temp;
        arr[temp]++;
    }
    cin >> x;
    for (int i = 0; i < x; i++) {
        int temp;
        cin >> temp;
        arr[temp]++;
    }
    int counter = 0;
    for (int i = 1; i <= n; i++) {
        if (arr[i])
            counter++;
    }
    if (counter == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

//    int n,m;
//    cin>>n>>m;
//    adj= vvi (n);
//
//    visited =vector<int> (n);
//    for(int i=0;i<m;i++){
//        int from,to;
//        cin >> from >> to;
//        adj[ from - 1].push_back( to - 1 );
//        adj[ to - 1 ].push_back( from - 1 );
//    }
//    int ans = 0 ;
//    for(int i=0;i<n;i++){
//        if(!visited[i])
//            ans += dfs(i);
//    }
//    int counter =0;
//    for(int i=0;i<n;i++)
//        if(visited[i]!=3)
//            counter++;
//    ans+= (counter%2);
//    cout<<ans<<endl;

}