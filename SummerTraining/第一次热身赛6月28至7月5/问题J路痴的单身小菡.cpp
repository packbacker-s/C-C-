#include "stdio.h"
int main(){
  int T;
  char a[1000][1000];
  int i,j,n,m,k;
  scanf("%d",&T);
  while(T--){
    scanf("%d%d%d",&n,&m,&k);
    for(i=0;i<n;i++){
      for(j=0;j<m;j++)
      scanf("%c",a[i][j]);

    }
  }

}


李子春

#include <cstdio>
#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
typedef pair<int, int> pii;
typedef long long LL;
int ans;
int n, m;
int cx, cy;
int min_time_b;
struct node {
    int x, y, ans;
};
char map[1007][1007];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
inline int In_map(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

queue<node> q;
int check[1007][1007];
int bfs(int lx, int ly)
{
    node s, tem;

    memset(check, false, sizeof check);
    s.x = lx, s.y = ly;
    s.ans = 0;
    q.push(s);
    check[lx][ly] = true;
    while (!q.empty()) {
        s = q.front();
        // cout << " *** " << s.x << " " << s.y << endl;
        q.pop();
        if (s.x == cx && s.y == cy) {
            return s.ans;
        }
        for (int i = 0; i < 4; ++i) {
            tem.x = s.x + dx[i];
            tem.y = s.y + dy[i];
            tem.ans = s.ans + 1;
            if (In_map(tem.x, tem.y) && !check[tem.x][tem.y] && map[tem.x][tem.y] != '#') {
                check[tem.x][tem.y] = true;
                q.push(tem);
            }
        }
    }
    return -1;
}
void dfs(int x, int y, int t)
{
    if (t > min_time_b) return;
    if (x == cx && y == cy) {
        ans++;
        return;
    }
    for (int i = 0; i < 4; ++i) {
        int temx = x + dx[i], temy = y + dy[i];
        if (In_map(temx, temy) && map[temx][temy] != '#' && map[temx][temy] != 'o') {
            // cout << temx << " $$$ " << temy << endl << map[temx][temy] << endl;
            map[temx][temy] = 'o';
            dfs(temx, temy, t + 1);
            map[temx][temy] = '*';
        }
    }
}

int main()
{
    int t, k;

    cin >> t;
    int s = 1;
    while (t--) {
        while (!q.empty()) q.pop();
        memset(map, 0, sizeof map);
        ans = 0;
        cin >> n >> m >> k;
        int lx, ly;
        min_time_b = 0;
        cx = cy = lx = ly = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                scanf(" %c", &map[i][j]);
                if (map[i][j] == 'L') {
                    lx = i, ly = j;
                }
                if (map[i][j] == 'C') {
                    cx = i, cy = j;
                }
            }
        }
        printf("Case #%d: ", s++);
        map[lx][ly] = 'o';
        min_time_b = bfs(lx, ly);
        if (min_time_b > k || min_time_b == -1) {
            cout << "-1" << endl;
            continue;
        }else {
            dfs(lx, ly, 0);
            cout << min_time_b << " " << ans << endl;
        }
    }
    return 0;
}
*/









/*
边俊亭
#include <cstdio>
#include <cstring>
#include <queue>
#include <cmath>
using namespace std;

typedef pair<int, int> pii;
const int maxn = 1e3 + 5;
int n, m, k, step, ans, Dist;
char G[maxn][maxn];
int dist[maxn][maxn];
bool vis[maxn][maxn];
pii B, E, now, Next;
/*
    这里的pair完全可以用结构体代替

    pair<int, int> 可以看作是一个类似于结构体的寄存器
    比如 struct P {
        int first, second;
    }now;
    可以用now.first, now.second访问这个变量的两个值。
    也可以申明pair<int, int>类型的数组，也就相当于struct P array[size];
 */
int bfs(int x, int y) {
    memset(vis, false, sizeof vis);
    memset(dist, 0, sizeof dist);
    queue <pii> Q;
    Q.push(make_pair(x, y));
    dist[x][y] = 0;
    while(!Q.empty()) {
        pii now = Q.front();
        Q.pop();
        if(now.first == E.first && now.second == E.second) return dist[now.first][now.second];
        for(int dx = -1; dx <= 1; dx ++) {
            for(int dy = -1; dy <= 1; dy ++) {
                if(abs(dx - dy) == 1) {
                    Next.first = now.first + dx;
                    Next.second = now.second + dy;
                    if(!vis[Next.first][Next.second] && Next.first >= 0 && Next.first < n && Next.second >= 0 && Next.second < m && G[Next.first][Next.second] != '#') {
                        dist[Next.first][Next.second] = dist[now.first][now.second] + 1;
                        Q.push(make_pair(Next.first, Next.second));
                        vis[Next.first][Next.second] = true;
                    }
                }
            }
        }
    }
    return -1;
}

void dfs(pii B, pii E, int D) {
    if(B.first == E.first && B.second == E.second) {
        if(D == ans) step ++;//如果当前访问的结点为终点且到起点的距离为最短路则step++
    }
    if(D > ans) return;//如果当前路径在D步内不能到达终点则回退，换下一条路
    for(int i = -1; i <= 1; i ++) {
        for(int j = -1; j <= 1; j ++) {
            if(abs(i - j) == 1) {//由于只能从上下左右四个方向走，所以可以找出这样的关系式，读者可以自行在草稿纸上进行验证
                if(B.first + i >= 0 && B.first + i < n && B.second + j >= 0 && B.second + j < m) {//不越界
                    if(G[B.first + i][B.second + j] != '#' && !vis[B.first + i][B.second + j]) {//判断是否没有访问过且不为石头
                        vis[B.first + i][B.second + j] = true;
                        dfs(make_pair(B.first + i, B.second + j), E, D + 1);//递归走下一步
                        vis[B.first + i][B.second + j] = false;//记得修复状态
                    }
                }
            }
        }
    }
}

int main() {
    int t, Case = 0;
    scanf("%d", &t);
    while(t --) {
        step = 0;
        Dist = 0x3f3f3f3f;
        scanf("%d %d %d", &n, &m, &k);
        for(int i = 0; i < n; i ++) scanf("%s", G[i]);
        for(int i = 0; i < n; i ++) {
            for(int j = 0; j < m; j ++) {
                if(G[i][j] == 'L') B = make_pair(i, j);
                if(G[i][j] == 'C') E = make_pair(i, j);
            }
        }
        ans = bfs(B.first, B.second);
        if(ans > k) ans = -1;
        printf("Case #%d: %d ", ++Case, ans);
        if(ans != -1) {
            memset(vis, false, sizeof vis);
            dfs(B, E, 0);
            printf("%d", step);
        }
        printf("\n");
    }
    return 0;
}
*/
