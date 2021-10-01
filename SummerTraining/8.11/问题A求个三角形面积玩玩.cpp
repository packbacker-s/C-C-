#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
/*const double eps = 1e-8;
const double inf = 1e20;
const double pi = acos(-1.0);
const int maxn = 1010;
int sgn (double x) {
  if(fabs(x) < eps) return 0;
  if(x < 0) return -1;
  else return 1;
}
struct point {
  double x, y;
  point(){}
  point(double _x, double _y) {
    x = _x;
    y = _y;
  }

}
*/
int main() {
  double xa, ya, xb, yb, xc, yc;
  double a, b, c, area, p;
  while(~scanf("%lf %lf %lf %lf %lf %lf", &xa, &ya, &xb, &yb, &xc, &yc)) {
    a = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
    b = sqrt((xa - xc) * (xa - xc) + (ya - yc) * (ya - yc));
    c = sqrt((xb - xc) * (xb - xc) + (yb - yc) * (yb - yc));
    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    if(a + b > c && a + c > b && b + c > a)
    printf("%.2lf\n", area);
    else
    printf("You're so funny\n");
  }
  return 0;
}
