#include <stdio.h>
#include <iostream>
using namespace std;
int fun(int now, int m) {
  if(now == 1)
  return m;
  else
  return 2 * (fun(now - 1, m) + 1);
}
int main() {
  int x, y, z;
  while (~scanf("%d %d %d", &x, &y, &z)) {
    int sum;
    sum = (z) * fun(x, y);
    printf("%d\n", sum);
  }
  return 0;
}
