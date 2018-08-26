#include <iostream>
#include<vector>
#include<bits/stdc++.h>

#define ll long long

using namespace std;
vector<int> visted;
vector <vector<int>> dfs;

//stack<int>sorted;
double DFS(int node, int depth = 0, int parent = -1) {
    if (visted[node])
        return 0;
    visted[node] = 1;
    double counter = 0;
    double sum = 0;

    for (int i = 0; i < dfs[node].size(); i++) {
        int child = dfs[node][i];
        if (child != parent) {
            sum += DFS(child, depth, node) + 1;
            counter++;
        }
    }
    if (sum)
        return sum / counter;
    else
        return 0;

}


int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin.sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int n, m;
    cin >> n;
    dfs = vector < vector < int >> (n);
    visted = vector<int>(n);

    for (int i = 0; i < n - 1; i++) {
        int from, to;
        cin >> from >> to;
        from--;
        to--;
        dfs[from].push_back(to);
        dfs[to].push_back(from);
    }

    double ans = DFS(0);
    cout << fixed << setprecision(6) << ans << endl;


}