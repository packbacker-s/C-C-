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
int bfs(int x, int y){
  memset(check, 0, sizeof check);
  node s, temp;
  s.x = x, s.y = y, s.ans = 0;
  check[x][y] = 1;
  queue<node> q;
  q.push(s);
  while (!q.empty()) {
    s = q.front();
    q.pop();
    if (s.x == x) {
      return s.ans;
    }
    temp.x = s.x - 1;
    temp.ans = s.ans + 1;
    if (temp.x > 0 && !check[temp.x]) {
      q.push(temp);
      check[temp.x] = 1;
    }
    temp.x = s.x + 1;

    if (temp.x < MAX && !check[temp.x]) {
      q.push(temp);
      check[temp.x] = 1;
    }
    temp.x = s.x * 2;
    if (temp.x < MAX && !check[temp.x]) {
      q.push(temp);
      check[temp.x] = 1;
    }
  }
}
int main() {
  int n, x;
  cin >> n >> x;
  cout << bfs(n, x) << endl;
  return 0;
}
