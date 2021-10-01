#include <iostream>
#include <cstdio>
using namespace std;
typedef long long LL;
LL nfc(LL n) {
  if(n == 0 || n == 1) return 1;
  LL ret = 0;
  for(int i = 0; i < n; i++) {
    ret += nfc(i) * nfc(n - 1 - i);
  }
  return ret;
}
int main() {
  LL n;
  while(~scanf("%lld", &n)) {
    LL x;
    LL ni = 1;
    for(int i = 2; i <= n; i++) {
      ni *= i;
      x = nfc(n) * ni * ni;
    }
    printf("%lld\n", x);
  }
  return 0;
}
