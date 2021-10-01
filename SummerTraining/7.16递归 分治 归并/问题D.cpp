#include <stdio.h>
int fun(int n) {
  if (n == 0) return 0;
  if(n == 1)
  return 1;
  else
  return 2 * fun(n - 1) + 1;
}
int main() {
  int a, b;
  while(~scanf("%d %d",&a, &b)) {
    printf("%d %d\n",fun(a), fun(a - b + 1) - fun(a - b));
  }
  return 0;
}
