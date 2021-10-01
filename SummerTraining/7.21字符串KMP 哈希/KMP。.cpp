#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 1000+5;
char p[maxn];
int lenp;
int main() {
  int lenp;
  scanf("%s", p);
  lenp = strlen(p);
  int next[maxn];
  next[0] = -1;
  int k = -1;
  int j = 0;
  while(j < lenp - 1) {
    if(k == -1 || p[j] == p[k]) {
      ++j;
      ++k;
      if(p[j] != p[k])
      next[j] = k;
      else next[j] = next[k];
    }else {
      k = next[k];
    }
  }
  printf("%d\n", k);
  return 0;
}
