#include <bits/stdc++.h>
using namespace std;
#define T 100.0
#define delta 0.999
#define eps 1e-8
double y, dx[2] = {1.0, -1.0};
double F(double x) {
  return 6.0 * pow(x, 7.0) + 8.0 * pow(x, 6.0) + 7.0 * pow(x, 3.0) + 5.0 * pow(x, 2.0) - y * x;
}
int main() {
    scanf("%lf\n", &y);
    double t = T, x = 100.0, ans = F(x);
    while (t > eps) {
      double nx = -1.0;
      while(nx < 0 || nx > 100)
      nx = x + dx[rand() % 2] * t;
      //double de = ans - F(nx);
      //if(de >=0)
      //x = nx, ans = F(nx);
    //  else if(exp(de / t) > (double)rand() / (double) RAND_MAX) x = nx;
    //  t *= delta;
    if(F(nx) < F(x))
    x = nx;
    t *= delta;
    }

  printf("%.4lf\n", F(x));
  return 0;
}
