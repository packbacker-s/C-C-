#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int a[6], b[8];
  for(int i = 0; i < 6; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < 8; i++) {
    cin >> b[i];
  }
  sort(a, a+6);
  sort(b, b+8);
  for(int i = 0; i < 6; i++) {
    for(int j = 0; j < 8; j++) {
      if(a[i] == b[j])
      cout << a[i] << endl;
    }
  }
  return 0;
}
