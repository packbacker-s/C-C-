#include <cstdio>     //n为食物种数
#include <cstring>     //a为幸福值越大越好
#include <iostream>     //b为每种食物的卡路里
using namespace std;  //m为总卡路里量
int dp[100005];
int hate[105];
int happy[105];
int main() {
    while(1) {
      int n, m, a, b;
      cin >> n;
      for(int i = 0; i< n; i++) {
        scanf("%d %d", &happy[i], &hate[i]);
      }
      cin >> m;
      for(int i = 1; i <= n; i++) {
        int cc, vv;
        for(int k = 1; ; k++) {     //盘数
          if(k * hate[i] > m) break;
          cc = hate[i] * k;       //卡路里
          vv = happy[i] * k;      // 幸福值
          for(int w = m; w >= cc; w--) {
            dp[w] = max(dp[w - cc] + vv, dp[w]); //最大卡路里下的幸福值
          }
        }
      }
      printf("%d\n", dp[m]);
    }
  return 0;
}
