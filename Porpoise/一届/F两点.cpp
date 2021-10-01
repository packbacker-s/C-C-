#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int x1, y1, x2, y2;
  while(scanf("%d%d%d%d", &x1, &y1, &x2, &y2) != EOF) {
    int len = 0;
    int len1, len2;
    len1 = abs(x1) + abs(y1);
    len2 = abs(x2) + abs(y2);
    if(len1 >= len2) {
      len = abs(x2) + abs(y2) + abs(x2 - x1) + abs(y2 - y1);
    }
    else {
      len = abs(x1) + abs(y1) + abs(x1 - x2) + abs(y1 - y2);
    }
    cout << len << endl;
  }
  return 0;
}
