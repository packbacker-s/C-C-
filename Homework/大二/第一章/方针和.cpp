#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 100 + 5;
int main() {
  while(1) {
    int n;
    int sum = 0;
    int a[maxn][maxn];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        scanf("%d", &a[i][j]);
      }
    }
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        sum += a[i][j];
      }
    }
    printf("%d\n", sum);

  }
  return 0;
}
