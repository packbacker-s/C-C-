#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
using namespace std;
const int maxn = 10 + 8;
int a[maxn][maxn];         //map数组
int vis[maxn][maxn];       //标记数组
int step[maxn][maxn];      //表示(i,j)的最短路径
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
struct node {
  int x;
  int y;
  int cnt;
  node(int x = 0, int y = 0, int cnt = 0) {
    this->x = x;
    this->y = y;
    this->cnt = cnt;
  }
};
node fa[maxn][maxn];     //父亲数组  用来回溯打印路径
int check(int x, int y) {
  if(x < 0 || x > 4 || y < 0 || y > 4) return 0;   //出界
  if(a[x][y] == 1 || vis[x][y]) return 0;     //障碍物 或已经被访问
  return 1;
}
void bfs() {
  memset(vis, 0, sizeof vis);
  queue <node> q;
  node now;      //初始化起点
  now.x = 0;
  now.y = 0;
  now.cnt = 0;
  q.push(now);   //起点入队
  step[now.x][now.y] = 0;
  while(!q.empty()) {    //当队列不空
    now = q.front();   //出队
    q.pop();         //弹出队列
    vis[now.x][now.y] = 1;    //标记结点已经被访问
    step[now.x][now.y] = now.cnt;  //步数赋值
    if(now.x == 4 && now.y == 4) return;   //找到终点
    for(int i = 0; i < 4; i++) {
      node next;
      next.x = now.x + dx[i];
      next.y = now.y + dy[i];
      if(check(next.x, next.y)) {     //判断是否能走
        next.cnt = now.cnt + 1;   //步数+1
        q.push(next);    //节点入队
        fa[next.x][next.y] = now; //now结点走到next结点
                                  //所以next的父亲是now
      }
    }
  }
  return;
}
void printf_path(node u) {
  stack <node> s;
  for( ; ; ) {
    s.push(u);   //入栈
    if(step[u.x][u.y] == 0) break; //找到起点
    u = fa[u.x][u.y];      //回溯
  }
  while(!s.empty()) {  //栈不空
    printf("(%d, %d)\n", (s.top()).x,(s.top()).y);  //打印位置
    s.pop();
  }
  return;
}
int main() {
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      scanf("%d\n", &a[i][j]);   //读入地图
    }
  }
  bfs();
  printf("%d\n", step[4][4]);
  node ans(4, 4, step[4][4]);  //构造器初始化
  printf_path(ans);
  return 0;
}
