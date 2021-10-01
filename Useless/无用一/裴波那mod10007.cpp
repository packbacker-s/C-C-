//做错了 蓝桥模拟体


#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
const int maxn = 10005;
ll fn[maxn];
int main() {
  ll n, i;
  while(scanf("%lld", &n)) {
    ll ans;
    fn[1] = fn[2] = 1;
    for(i = 3; i <= n; i++) {
      fn[i] = fn[i-1] + fn[i-2];
    }
    ans = fn[i] % 10007;
    //cout << fn[i] << endl;
    printf("%lld\n", ans);
  }
  return 0;
}
