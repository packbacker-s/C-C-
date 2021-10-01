#include <stdio.h>
const int maxn = 100 + 5;
void fun(int n) {
  int sum = 0;
  int a[maxn][maxn];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      sum += a[i][j];
    }
  }
  printf("%d\n", sum);
}
int main() {
    int n;
    scanf("%d", &n);
    fun(n);
  return 0;
}
