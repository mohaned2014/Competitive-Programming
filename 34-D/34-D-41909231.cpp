#include <iostream>
#include<vector>
#include<bits/stdc++.h>

#define ll long long

using namespace std;
vector<int> visted;
vector <vector<int>> dfs;
//stack<int>sorted;
vector<int> parents;

void DFS(int node, int parent = -1) {
    visted[node] = 1;
    parents[node] = parent;
    for (int i = 0; i < dfs[node].size(); i++) {
        int child = dfs[node][i];
        if (!visted[child]) {
            DFS(child, node);
        }
    }
}


int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin.sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int n, Ocap, Ncap;
    cin >> n >> Ocap >> Ncap;
    Ocap--;
    Ncap--;
    dfs = vector < vector < int >> (n);
    visted = vector<int>(n);
    parents = vector<int>(n);
    for (int i = 0; i < n; i++) {
        int from, to;
        if (i == Ocap)
            continue;
        cin >> to;
        to--;
        dfs[i].push_back(to);
        dfs[to].push_back(i);
    }

    DFS(Ncap);
    for (int i = 0; i < n; i++) {
        if (i == Ncap)
            continue;
        cout << parents[i] + 1 << " ";
    }
    cout << endl;


}