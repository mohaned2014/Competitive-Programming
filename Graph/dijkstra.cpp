#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define  ii pair<int,int>
#define vii vector<ii>
const int N = 1e3 +9;
const int OO = (int)1e9;

vii adj[N];
int dis[N];


void distance(int source)
{
  priority_queue<ii> q;
  q.push({0,source  });
  dis[source]=0;
  while (!q.empty()) {

      ii node = q.top();
      q.pop();
      int cost = -node.first;
      int u = node.second;

      if(cost > dis[u])continue;

      for(auto child :adj[u]){
        int newCost = cost+child.second;

        if(newCost < dis[child.first]){
          dis[child.first]=newCost;
          q.push({-newCost,child.first});
        }
      }
  }
}

int main() {
  int n, m;
  scanf("%d %d",&n,&m );
  fill(dis,dis+n,OO);
  for (int i = 0; i < m; i++) {
    int x, y, w;
    scanf("%d %d %d",&x,&y,&w );
    adj[x-1].push_back({y-1,w});
  }

  int s, t;
  scanf("%d %d",&s ,&t );
  s--, t--;
  distance(s);
  if(dis[t]!=OO)
    printf("%d\n",dis[t] );
  else
    printf("-1\n");
}
