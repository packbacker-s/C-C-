#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;
const int maxn = 1005;
int main() {
  int n, ans = 0;
  int m;
  char a[maxn][maxn];
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n - 1; i++)
    for(int j = i +1; j < n; j++) {
      m = strcmp(a[i], a[j]);
      if(m < 0)
      ans++;
    }
    printf("%d\n", ans);

  return 0;
}
