#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 100 + 10;
int a[maxn];
int main() {
  int n;
  while(scanf("%d", &n) && n) {
    int x,ans = 0;
    memset(a, 0, sizeof a);
    for( int i = 0; i < n; i++) {
      cin >> x;
      a[x]++;
    }
    for(int i = 1; i <=105; i++) {
      if(i <= 2) {
        ans += a[i] / 2;
        a[i] %= 2;
      }else if(a[i] && a[i - 1] && a[i - 2]) {
        ans++;
        a[i] --;
        a[i - 1] --;
        a[i - 2] --;
      }
        ans += a[i] / 2;
        a[i] %= 2;
    }
    printf("%d\n", ans);
  }
  return 0;
}
