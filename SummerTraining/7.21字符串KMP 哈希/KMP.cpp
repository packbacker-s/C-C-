#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 10000;
int main() {
  char p[maxn];
  int lenp;
  cin >> p;
  lenp = strlen(p);
  int next[lenp];
  int k = -1;
  int j = 0;
  next[0] = -1;
  while(j < lenp - 1) {
    if(k == -1 || p[j] == p[k]) {
      ++k;
      ++j;
      next[j] = k;
      cout << 111 << endl;
    } else {
      k = next[k];
      cout << 222 << endl;
    }
  }
  printf("%d\n", k);

  return 0;
}
