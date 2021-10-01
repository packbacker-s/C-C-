#include <iostream>
using namespace std;
int main () {
  int c;
  cin >> c;
  while (c--) {
    int n, m;
    cin >> n >> m;
    if(n % (m + 1) == 0)
    printf("second\n");
    else
    printf("first\n");
  }
  return 0;
}
