#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 100 + 8;
char oil[maxn][maxn];  //油田数量
int vis[maxn][maxn];   //标记数组
int cnt;               //连通块的数量
int n, m;              //边界
void dfs(int x, int y) {    //深搜
  if(x < 0 || x > n || y < 0 || y > m) return;
  if(oil[x][y] != '@' || vis[x][y] ) return;
  vis[x][y] = 1;
  for(int i = -1; i <= 1; i++) {
    for(int j = -1; j <= 1; j++) {
      if(i || j)
      dfs(x + 1; y + j)
    }
  }
}
int main() {
  while(scanf("%d %d\n", &n, &m) == 2 && n &&m) {
    memset(vis, 0, sizeof vis);
  }

  return 0;
}
