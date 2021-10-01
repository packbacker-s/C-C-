#include <iostream>
using namespace std;
int main() {
  int n, a, b, c, cnt = 0;  //cnt 计数
  cin >> n;
  cin >> a >> b >> c;
  for(int i = 1; i <= n; i++) {
    if(i % a != 0 && i % b != 0 && i % c != 0) {
      cnt++;
    }
  }
  cout << cnt << endl;;
  return 0;
}
