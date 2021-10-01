#include <stdio.h>
int fun(int a,int b,int n) {
  if(n==1)
  return 1;
  else
  return a * fun(a, b, n-1) + b;
}
int main() {
  int sum = 1;
  int x, y, z;
  while(~scanf("%d %d %d",&x, &y, &z)) {
    sum = fun (x, y, z);
    printf("%d\n", sum);
  }
  return 0;
}
