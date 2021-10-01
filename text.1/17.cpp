#include <cstdio>
#include <cmath>
using namespace std;
int main() {
  int a;
  while(~scanf("%d", &a)) {
    int sum;
    sum = pow(2, a) - 1;
    printf("%d\n", sum);
  }
  return 0;
}
