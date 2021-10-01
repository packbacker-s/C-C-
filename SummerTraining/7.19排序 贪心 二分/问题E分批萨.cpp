#include <iostream>
#include <cstdio>
#include <cstring>
#include <math.h>
#define  pi  acos(-1.0)
using namespace std;
const int maxn = 10000 + 5;

int main() {
  int t,n,f;
  cin >> t;
  while(t --) {
    cin >> n >> f;
    f ++;
    int r;
    double a[maxn];
    double mid;
    double max = 0, s = 0;
    for(int i = 1; i <= n; i ++) {
      cin >> r;
      a[i] = pi * r * r;
      s += a[i];
      if(max <= a[i])
      max = a[i];
    }
    double l1 = max / f;   // 最多分得披萨数
    double l2 = s / f;   // 最少分得披萨数
    while(l2 - l1 >= 1e-5) {
      int cnt = 0;
      mid = (l1 + l2) / 2;
      for(int i = 0;i < n; i++) {
        cnt = cnt + (int)(a[i] / mid);
      }
      if(cnt < f) {
        l2 = mid;
      }else
      l1 = mid;
    }
    printf("%.4lf\n", mid);
  }
  return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>
#include <math.h>
using namespace std;
const int maxn = 10000 + 5;
const double INF = 100000;
int n, R, t, f, k;
double L[maxn];

bool check(double x) {
  int sum = 0;
  for(int i = 0; i < n; i ++) {
    num += (int) (L [i] / x);
  }
  return num >= k;
}
int main() {
  scanf("%d", &t);
  while(t --) {
    cin >> n >> f;
    for(int i = 0; i < n; i ++) {
      cin >> R;
    }
    double l = 0, r = INF, mid;
  }

  return 0;
}
