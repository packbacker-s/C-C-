#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 100+8;
char oil[maxn][maxn];   // 油田
int vis[maxn][maxn];    // 标记数组    判断节点是否被访问
int cnt;            //连通块数量
int n, m;           //n行   m列
void dfs(int x, int y) {  //深搜
  if(x < 0 || x > n || y < 0 || y > m) return;  // 判断是否出界
  if(oil[x][y] != '@' || vis[x][y]) return;     // 不是油田  或已经访问
  vis[x][y] = 1;                                //标记节点已经被访问
  for(int i = -1; i <= 1; i++) {
    for(int j = -1; j <= 1; j++) {                //向8个方向搜索
      if(i || j)
      dfs(x + i, y + j);
    }
  }
}
int main () {
  while(cin >> n >> m) {
    memset(vis, 0, sizeof vis);   //初始化  每个节点都没有被访问
    cnt = 0;                      //初始化油田数为0
    for(int i = 0; i < n; i++)
        cin >> oil[i];
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if(oil[i][j] == '@' && !vis[i][j]) {       //是油田且未被访问
          dfs(i, j);
          cnt++;
        }
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
