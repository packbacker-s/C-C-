#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 100 + 6;
char oil[maxn][maxn];    //油田数组
int vis[maxn][maxn];     //标记数组
int n, m, cnt;          //n行m列 cnt为油田数
void dfs(int x, int y) {
  if(x < 0 || x > n || y < 0 || y > m) return;    //数组出界
  if(oil[x][y] != '@' || vis[x][y]) return;     //不是油田或已标记
  vis[x][y] = 1;                        //标记
  for(int i = -1; i <= 1; i++) {        //像八个方向搜索
    for(int j = -1; j <= 1; j++) {
      if(i || j) {
        dfs(x + i, y + j);
      }
    }
  }
}
  int main() {
    while(scanf("%d %d", &n, &m) == 2 && n && m) {   //输入行列  并以 0 0推出
      cnt = 0;                     //油田数赋初值
      memset(vis, 0, sizeof vis);         //初始化数组vis
      for(int i = 0; i < n; i++) {  //读入油田
        cin >> oil[i];
      }
      for(int i = 0; i < n; i++) {           //搜索
        for(int j = 0; j < m; j++) {
          if(oil[i][j] == '@' && !vis[i][j]) {    // 是油田并且未标记
            dfs(i, j);   //dfs搜索
            cnt++;
          }
        }
      }
      cout << cnt << endl;
    }
    return 0;
  }
