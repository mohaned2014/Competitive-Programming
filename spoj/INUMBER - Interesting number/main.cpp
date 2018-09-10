#include <bits/stdc++.h>
using namespace std;
const int  qa = 1001;
vector<vector<int>> vis; //this is path the number chosen each time
vector<vector<int>> mody; // this is the last mod so we can build the path
vector<vector<int>> summi; // this is the last sum so we can build the path

void bfs ( int N ) {
     queue<pair<int, int>> q;
     for ( int i = 1 ; i < 10; i++ ) {
          int mod = i % N;
          int sum = i;
          q.push ( make_pair ( mod, sum ) );
          vis[mod][sum] = i ; //this is the path
          mody[mod][sum] = -1; // last mod is -1 "no previous"
          summi[mod][sum] = -1;//last sum is -1 "no previous"
     }
     while ( !q.empty() ) {

          pair<int, int> node = q.front();
          q.pop();
          if ( node.first == 0 && node.second == N ) {
               return;
          }
          for ( int i = 0; i < 10; i++ ) {
               int mod = ( ( 10 * node.first ) + i ) % N; // new mod
               int sum = node.second + i;//new sum
               if ( sum <= N && vis[mod][sum] == -1 ) { // if sum < N and not visited
                    q.push ( make_pair ( mod, sum ) );
                    vis[mod][sum] = i; // this is the digit selected
                    mody[mod][sum] = node.first; // this is the last mod to get the path
                    summi[mod][sum] = node.second ;// this is the last sum to get the path
                    if ( mod == 0 && sum == N )//this to remove a layer if we found our number
                         return;
               }
          }

     }

}
int main() {
     int t;
     cin >> t;
     while ( t-- ) {
          int N;
          cin >> N;
          vis =   vector<vector<int>>  ( qa, vector<int> ( qa, -1 ) );
          mody =   vector<vector<int>>  ( qa, vector<int> ( qa, -1 ) );
          summi =   vector<vector<int>>  ( qa, vector<int> ( qa, -1 ) );

          bfs ( N );
          int mod = 0, sum = N;
          string s;
          while ( mod != -1 || sum != -1 ) {
               s += ( char ) ( vis[mod][sum] + 48 );
               int temp = mod;
               mod = mody[mod][sum];
               sum = summi[temp][sum];
          }
          reverse ( s.begin(), s.end() );
          cout << s << endl;
     }
}
