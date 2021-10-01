#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int sum = 0;
  int a = 2;
  for(int i = 1; i <= n; i++) {
    sum += a;
    a += 3;
  }
  cout << sum << endl;
  return 0;
}
