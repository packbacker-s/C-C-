#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 200000 + 8;
int n, q;
int a[maxn];
int b[maxn];
int main() {
  scanf("%d %d", &n, &q);
  for(int i = 0; i < n; i++) {
    scanf("%", &a[i]);
  }
  while(q--) {
    int cnt = 0;
    int l, r;
    int x, y, z, k, yy;
    scanf("%d %d", &l, &r);
    for(int i = l; i <= r; i++) {
      for(int j = 0; j < r - l + 1; j++) {
        b[j] = a[i];                 //截取l到r的字符串
      }
    }
    for(int x = 0; x < r - l + 1; x++) {
      if(b[x] != 9) cnt++;
      if(b[x] == 9) break;
    }
    for(int y = x + 1; y < r - l + 1 - x - 1; y++){
      if(b[y] != 1) cnt++;
      if(b[y] == 1) break;
    }
    for(int z = y + 1; z < r - l + 1 - y - 1; z++) {
      if(b[z] != 0) cnt++;
      if(b[z] == 0) break;
    }
    for(int k = z + 1; z <(yy =  r - l + 1 - z - 1); k++) {
      if(b[k] != 2) cnt++;
      if(b[k] == 2) cnt += r - l + 1 - k - 1;
    }
    printf("%d\n", cnt);
  }
  return 0;
}
