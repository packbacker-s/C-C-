#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int n;
const int maxn = 1000 + 5;
int main() {
  char a[maxn][maxn];
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(!strcmp(a[i], a[j]))
      --n;
    }
  }
  printf("%d\n", n);
  return 0;
}
