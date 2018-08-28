#include <bits/stdc++.h>
using namespace std;
vector<vector<pair < int , int>> >
adj;
vector<vector<int>> visited;
vector<int> indegree;
vector<int> level;
const int OO = INT_MAX;
const int numberofnodes = 2e4 + 1;
bool isvalid (int i , int j) {
    if ( i < 0 || j < 0 || i >= 8 || j >= 8 )
        return false;
    return true;
}

int bfs (int i , int j , int fi , int fj) {
    //level = vector < int > (numberofnodes , OO);
    pair<int , int> source = make_pair(i , j);
    pair<int , int> destention = make_pair(fi , fj);
    queue<pair<int , int>> q;
    q.push(source);
    //level[ source.first ][ source.second ] = 0;
    int curlevel = 1;
    while ( !q.empty()) {
        int sz = q.size();
        while ( sz-- ) {
            pair<int , int> node = q.front();
            q.pop();
            if ( visited[ node.first ][ node.second ] )
                continue;

            if ( node == destention ) {
                return curlevel - 1;
            }
            visited[ node.first ][ node.second ] = 1;
            i = node.first;
            j = node.second;
            if ( isvalid(i - 1 , j - 2)) {
                q.push(make_pair(i - 1 , j - 2));
            }
            if ( isvalid(i - 1 , j + 2)) {
                q.push(make_pair(i - 1 , j + 2));
            }
            if ( isvalid(i - 2 , j - 1)) {
                q.push(make_pair(i - 2 , j - 1));
            }
            if ( isvalid(i - 2 , j + 1)) {
                q.push(make_pair(i - 2 , j + 1));
            }

            if ( isvalid(i + 1 , j - 2)) {
                q.push(make_pair(i + 1 , j - 2));
            }
            if ( isvalid(i + 1 , j + 2)) {
                q.push(make_pair(i + 1 , j + 2));
            }
            if ( isvalid(i + 2 , j - 1)) {
                q.push(make_pair(i + 2 , j - 1));
            }
            if ( isvalid(i + 2 , j + 1)) {
                q.push(make_pair(i + 2 , j + 1));
            }

        }
        curlevel++;

    }
}

int main () {
    //freopen("D:\\cs\\problem solving\\Competitive-Programming\\input.txt" , "r" , stdin);
    int T;
    cin >> T;
    while ( T-- ) {
        string n , m;
        cin >> n >> m;
        int i = n[ 0 ] - 97;
        int j = n[ 1 ] - 49;
        int fi = m[ 0 ] - 97;
        int fj = m[ 1 ] - 49;
        //adj = vector < vector < pair<int , int> > > (8);
        visited = vector < vector < int >> (8 , vector<int>(8));

        int x = bfs(i , j , fi , fj);
        cout << x << endl;
    }
    return 0;
}