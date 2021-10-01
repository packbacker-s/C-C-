#include <iostream>
#include <cstdio>
using namespace std;
typedef long long LL;

int main() {
  LL T;
  scanf("%d", &T);
  while(T--) {
    LL x;
    scanf("%lld", &x);
    LL phi = x;
    for(int pi = 2; pi <= x; pi++) {
      if(x % pi == 0) {
        phi = phi / pi * (pi - 1);
        while(x % pi == 0) x /= pi;
      }
    }
    printf("%lld\n", phi);
  }
  return 0;
}
