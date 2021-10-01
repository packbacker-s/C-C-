#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int x, y;
  int xa, xb, xc, ya, yb, yc;
  for(x = 100; x <= 1233; x++) {
    y = 1333 - x;
    xa = x % 10;
    yc = y / 100;
    ya = y % 10;
    xc = x / 100;
    xb = x / 10 % 10;
    yb = y / 10 % 10;
    if(xa == yc && ya == xc && xb == yb)
    printf("%d+%d=1333\n", x, y);
  }
  return 0;
}
