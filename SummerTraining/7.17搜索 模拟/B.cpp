#include <cstdio>
#include <queue>
#include <map>
#include <vector>
using namespace std;

typedef pair<int ,int > P;
const int n = 5, INF = 1e7;
int maze[n][n], d[n][n], dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
P path[n][n];

void bfs() {
    queue <P> s;
    s.push(P(4, 4));
    for(int i = 0; i < n; i ++)
        for(int j = 0; j < n; j ++) {
            d[i][j] = INF;
            path[i][j] = P(-1, -1);
        }
    d[4][4] = 0;
    while(s.size()) {
        P p = s.front();
        if(p.first == 0 && p.second == 0)   break;
        s.pop();
        for(int i = 0; i < 4; i ++) {
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < n && maze[nx][ny] == 0 && d[nx][ny] == INF) {
                s.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
                path[nx][ny] = P(p.first, p.second);
            }
        }
    }
}

int main () {
    for(int i = 0; i < n; i ++)
        for(int j = 0; j < n; j ++)
            scanf("%d", &maze[i][j]);
    bfs();
    P p = P(0, 0);
    while(p.first != -1) {
        printf("(%d, %d)\n", p.first, p.second);
        int tmp = p.first;
        p.first = path[p.first][p.second].first;
        p.second = path[tmp][p.second].second;
    }
    return 0;
}
