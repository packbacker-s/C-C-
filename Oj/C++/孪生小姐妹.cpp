#include <iostream>
using namespace std;
const int maxn = 10005;
int a[maxn], b[maxn];
int main() {
  int n, l;
  while(~scanf("%d %d", &n, &l)) {
    int j = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
      scanf("%d", a[i]);
    }
    for(int i = 0; i < n; i++) {
      if(a[i] % 2 == 0)
      b[j++] = a[i];
    }
    for(int i = 0; i < j- 1; i++) {
      for(int k = i + 1; k < j; k++) {
        if(b[i] + b[k] == l) {
          cnt++;
        }
      }
    }
    
  }
  return 0;
}
