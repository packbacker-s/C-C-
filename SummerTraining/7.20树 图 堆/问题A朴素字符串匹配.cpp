#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 100 + 5;
char a[maxn], b[maxn];
int main() {
  while(~scanf("%s %s", &a, &b)) {
    int ans = 0;
    char *p1, *p2;
    p1 = a;
    p2 = b;
    while(*p1 != '\0') {
      if(*p1 == *p2) {
      while(*p1 == *p2 && *p2 != '\0') {
        p1++;
        p2++;
      }
    }else
    p1++;
    if(*p2 != '\0')
    ans++;
    p2 = b;
  }
  printf("%d\n", ans);

}
  return 0;
}
