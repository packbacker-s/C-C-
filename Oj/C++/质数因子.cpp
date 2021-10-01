#include <iostream>
using namespace std;
int main() {
  int n;
  while(cin >> n) {

    for(int i = 2; i <= n; i++) {
      while(n % i == 0) {
        cout << i << " ";
        n /= i;
      }
    }
  }

  return 0;
}
/*

int main() {
  int a;
  cin >> a;
  for(int i = 2; i <= a; i++) {
    while(a % i == 0) {
      cout << i << " ";
      a = a / i;
    }
  }
  return 0;

}
*/
