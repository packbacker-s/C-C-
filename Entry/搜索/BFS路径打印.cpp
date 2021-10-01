#include <cstdio>
#include <cstring>
#include <stack>
#include <queue>
using namespace std;
const int maxn = 10 + 8;
int a[maxn][maxn];              //地图数组
int vis[maxn][maxn];            //标记数组
int step[maxn][maxn];              //表示起点(i, j)的最短路径
int dx[] = {-1, 1, 0, 0};      //方向数组
int dy[] = {0, 0, -1, 1};
struct node {
  int x;                // 行
  int y;                       //列
  int cnt;                 //走到当前位置的步数
  node (int x = 0, int y = 0, int cnt = 0){      //构造器初始化
    this->x = x;
    this->y = y;
    this->cnt = cnt;
  }
};
node fa[maxn][maxn];        // 父亲数组  用来回溯打印路径
int check(int x, int y) {         //判断节点是否能被访问
  if(x < 0 || x > 4 || y < 0 || y > 4) return 0;   //出界
  if(a[x][y] == 1 || vis[x][y]) return 0;   //  障碍物或 已经被访问
  return 1;
}
void bfs() {
  memset(vis, 0, sizeof vis);     // 初始化数组vis
  queue <node> q;      //队列
  node now;        // 初始化起点
  now.x = 0;
  now.y = 0;
  now.cnt = 0;
  q.push(now);     // 起点入队
  step[now.x][now.y] = 0;
  while(!q.empty()) {   //当队列不空
    now = q.front();// 出队
    q.pop();// 弹出队列
    vis[now.x][now.y] = 1;  // 标记节点已经被访问
    step[now.x][now.y] = now.cnt; //步数赋值
    if(now.x == 4 && now.y == 4) return;  //找到终点
    for(int i = 0; i < 4; i ++) {    //向四个方向搜索
      node next;
      next.x = now.x + dx[i];
      next.y = now.y + dy[i];
      if(check (next.x, next.y)) {//判断是否能走
        next.cnt = now.cnt + 1;   //步数+1
        q.push(next);           //结点入队
        fa[next.x][next.y] = now;     //now结点走到next结点
      }                              //所以next的父亲是now
    }
  }
  return;
}
void print_path(node u) {
  stack <node> s;           //栈
  for(; ;) {
    s.push(u);             //入栈
    if(step[u.x][u.y] == 0) break;     //找到起点
    u = fa[u.x][u.y];           //回溯
  }
  while(!s.empty()) {          //栈不空
    printf("(%d %d)\n",(s.top()).x, (s.top()).y );   //打印位置
    s.pop();             //出栈
  }
  return;
}
int main() {
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      scanf("%d", &a[i][j]);      //读入地图
    }
  }
  bfs();               //搜索
  printf("%d\n", step[4][4]);
  node ans(4, 4, step[4][4]);      //构造器初始化
  print_path(ans);
  return 0;
}
