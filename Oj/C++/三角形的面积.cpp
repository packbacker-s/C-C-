#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int t, x, y, z;
  scanf("%d", &t);
  while(t--) {
    scanf("%d %d %d", &x, &y, &z);
    if(x + y > z && x + z > y && y + z > x) {
      double p = (x + y + z) / 2.0;
      double area = sqrt(p * (p - x) * (p - y) * (p - z));
      printf("%.3f\n\n", area);
    }
    else {
      printf("-1\n\n");
    }
  }
  return 0;
}
