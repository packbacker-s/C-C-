#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#define INF 0x3f3f3f3f
#define N 110
using namespace std;
int dx[4][2] = {{0,1}, {1, 0}, {0, -1}, {-1, 0}};
int len[N][N], a[N][N];
int m, n;
int dp(int x, int y) {
  int tx, ty, k, s, ms;
  ms = 0;
  if(len[x][y] != 0)     //递归出口
     return len[x][y];
     for(k = 0; k <= 3; k++) {
       tx = dx[k][0] + x;
       ty = dx[k][1] + y;
       if(tx < 0 || ty < 0|| tx > m - 1 || ty > n - 1)
       continue;
       if(a[tx][ty] < a[x][y]) {
         s = dp(tx, ty);
         ms = max(ms, s);
       }
     }
     len[x][y] = ms + 1;
     return len[x][y];
  }
int main() {
  int r, c, h;
  int dp[r + 5][c + 5];
  while(cin >> r >> c) {
    for(int i = 0; i < r; i++) {
      for(int j = 0; j < c; j++)
      cin >> h;
      cout << endl;
    }
    memset(dp, 0, sizeof dp);

  }
  return 0;
}
