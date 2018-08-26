#include <iostream>
#include<vector>
#include<bits/stdc++.h>

#define ll long long

using namespace std;
vector<int> cats;

vector<int> visted;
vector <vector<int>> dfs;

//stack<int>sorted;
int DFS(int node, int mx, int cur_allowed, bool consc, int parent = -1) {
    if (cats[node] && consc == false) {
        consc = true;
        cur_allowed = 1;
    } else if (cats[node] && consc == true) {
        cur_allowed++;
        consc = true;
    } else {
        consc = false;
        cur_allowed = 0;
    }
    if (cur_allowed > mx) {
        return 0;
    }
    if (dfs[node].size() == 1 && node != 0)
        return 1;
    int cnt = 0;

    for (int i = 0; i < dfs[node].size(); i++) {
        int child = dfs[node][i];

        if (child != parent)
            cnt += DFS(child, mx, cur_allowed, consc, node);
    }
    return cnt;
}


int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int n, m;
    cin >> n >> m;
    dfs = vector < vector < int >> (n);
    visted = vector<int>(n);
    cats = vector<int>(n);
    for (int i = 0; i < n; i++) {
        cin >> cats[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int from, to;
        cin >> from >> to;
        from--;
        to--;
        dfs[from].push_back(to);
        dfs[to].push_back(from);
    }

    int ans = DFS(0, m, 0, false);
    cout << ans << endl;


}