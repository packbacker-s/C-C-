#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n;
  while (cin >> n) {
    int m;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
      cin >> m;
      cnt ^= m;
    }
    if(cnt == 0) printf("second\n");
    else printf("first\n");
  }
  return 0;
}
