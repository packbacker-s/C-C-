#include <stdio.h>
#include <algorithm>
using namespace std;
const int maxn = 100000 + 5;
int main() {
  int n;
  scanf("%d", &n);
  int a[maxn];
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a + n);
  for(int i = n - 1; i >= 0; i--) {
    printf("%d ", a[i]);
  }
  return 0;
}
