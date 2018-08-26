#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<int> visted;
vector <vector<int>> dfs;

//stack<int>sorted;
int DFS(int node, int parent = -1) {
    //  cout<<parent<<"     "<<node<<endl;

    if (visted[node]) {
        // cout<<parent<<"     "<<node<<endl;
        return 0;
    }
    visted[node] = 1;
    int cnt = 0;
    for (int i = 0; i < dfs[node].size(); i++) {
        int child = dfs[node][i];
//        if(child!=parent)
        cnt = max(cnt, DFS(child, node));
    }
    return cnt + 1;
}

#define ll long long
stack<int> ans;

bool Transformation(ll a, ll wanted) {
    if (a > wanted)
        return false;
    else if (wanted == a) {
        ans.push(a);
        return true;
    } else {
        if (Transformation((2 * a), wanted)) {
            ans.push(a);
            return true;
        } else if (Transformation((10 * a) + 1, wanted)) {
            ans.push(a);
            return true;
        }
    }
    return false;

}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int n, m;
    cin >> n >> m;
//    dfs =vector<vector<int>> (n);
//    visted = vector<int> (0);
//    visted = vector<int> (n);
//    vector<int>roots;

//    for(int i=0;i<n ;i++){
//        int temp1,temp2;
//        cin>>temp1;
//        temp1--;
//        if(temp1!=-2)
//            dfs[temp1].push_back(i);
//        else{
//            roots.push_back(i);
//        }
//    }
//    int ans =0;
//    for(int i=0;i<roots.size();i++){
//        if(!visted[roots[i]])
//           ans= max(DFS(roots[i]),ans);
//    }
    //cout<<ans<<endl;
    if (Transformation(n, m)) {
        cout << "YES\n" << ans.size() << endl;
        while (!ans.empty()) {
            cout << ans.top() << " ";
            ans.pop();
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }


}