#include <stdio.h>
int main() {
  int n = 1;
  int sum = 0;
  for(int i = 1; i <= 30; i++) {
    n *= i;
    sum += n;
  }
  printf("%.2e\n", sum);
  return 0;
}
