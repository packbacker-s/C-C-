#include <stdio.h>
#include <string.h>
const int maxn = 2e5 + 5;
int tot,ans[maxn];
void fun(int n) {
  int t;
  memset(ans, 0, sizeof ans);
  ans[0] = 1;
  tot = 1;
  int cnt;
  int now;
  for(int i = 2; i <= n; i++) {
    now = 0;
    cnt = 0;
    while(now < tot) {
      t = ans[now] * i + cnt;
      ans[now] = t % 10;
      now ++;
      cnt = t / 10;
      if(tot == now  && cnt)
      tot ++;
    }
  }
  for(int i = tot - 1; i >= 0; i --) {
    printf("%d", ans[i]);
  }
  printf("\n");
}
int main() {
  int a;
  scanf("%d", &a);
  fun(a);
  return 0;
}
