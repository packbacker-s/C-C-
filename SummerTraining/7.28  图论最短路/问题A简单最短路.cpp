#include <iostream>
#include <cstdio>
#include <cstring>
#define maxn 1005
#define INF 0x3f3f3f3f
#define mem(a) memset(a, 0, sizeof a)
int map[maxn][maxn];
int dis[maxn],check[maxn];

using namespace std;
int dijkstra(int n, int m) {
  mem(check);mem(dis);
  for(int i = 1; i <= n; i++) {
    dis[i] = map[1][i];
  }
  check[1] = 1;dis[1] = 0;
  int minx = 0, pos;
  for(int i = 1; i < n; i++) {
    minx = INF;
    for(int j = 1; j <= n; j++) {
      if(!check[j] && minx > dis[j]) {
        minx = dis[j];
        pos = j;
      }
    }
    check[pos] = 1;
    for(int j = 1; j<= n; j++) {
      if(!check[j] && dis[j] > dis[pos] + map[pos][j]) {
        dis[j] = dis[pos] + map[pos][j];
      }
    }
  }
  return dis[n];
}


void init_map(int n, int m) {
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      map[i][j] = INF;
    }
  }
  int a, b, c;
  for(int i = 0; i < m; i++) {
    cin >> a >> b >> c;
    if(map[a][b] > c) {
      map[a][b] = map[b][a] = c;
    }
  }
}

int main() {
  int n, m;
  int a, b, c;
  cin >> n >> m;
  init_map(n, m);
  dijkstra(n, m);
  cout << dis[n] << endl;

  return 0;
}
