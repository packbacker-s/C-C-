#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 500000 + 6;
int n, k;
int MAX, MIN;
int a[maxn];
int main() {
  while(~scanf("%d %d", &n, &k)) {
    for(int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
    }
    while(--k) {
      sort(a, a + n);
      MAX = a[n - 1] - 1;
      MIN = a[0] + 1;
      a[n - 1] = MAX;
      a[0] = MIN;
    }
    int b;
    sort(a, a + n);
  //  MAX = a[n - 1];
    //MIN = a[0];
    b = a[n - 1] - a[0];
    printf("%d\n", b);
  }
  return 0;
}
