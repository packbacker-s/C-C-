#include <queue>
#include <cstring>
#include <iostream>
using namespace std;
#define MAX 10000
struct node {
  int x, y, ans;
};
int check[MAX][MAX];
char map[MAX][MAX];
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
int n, m;
bool In_map(int x, int y) {
  return x >= 0 && x < n && y >= 0 && y < m;
}
int bfs(int x, int y, int lx, int ly){
  memset(check, 0, sizeof check);
  node s, temp;
  s.x = x, s.y = y, s.ans = 0;
  check[x][y] = 1;
  queue<node> q;
  q.push(s);
  while (!q.empty()) {
    s = q.front();
    q.pop();
    if (s.x == lx && s.y == ly) {
      return s.ans;
    }
    for (int i = 0; i < 4; ++i) {
      temp.x = s.x + dx[i];
      temp.y = s.y + dy[i];
      if (In_map())
    }
  }
}
int main() {
  return 0;
}
