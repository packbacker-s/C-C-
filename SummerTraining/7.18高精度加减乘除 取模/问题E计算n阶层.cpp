#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 2e5 + 5;
int n,tot,ans[maxn];
int main() {
  int t;
  while(cin >> n) {
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
        if(tot == now  && cnt) tot ++;
      }
    }
      for(int i = tot - 1; i >= 0; i --) {
        cout << ans[i];
      }
      cout << endl;
  }
  return 0;
}
