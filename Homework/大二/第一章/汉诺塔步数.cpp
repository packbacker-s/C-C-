#include <stdio.h>
long long int fun(int n) {
  if (n == 0) return 0;
  if(n == 1)
  return 1;
  else
  return 2 * fun(n - 1) + 1;
}

int main() {
  int a;
  while(~scanf("%d",&a)) {
    printf("%lld\n",fun(a));
  }
  return 0;
}
