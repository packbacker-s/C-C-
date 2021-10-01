#include <iostream>
using namespace std;
typedef long long LL;
LL a, b, mod;
LL O1quick_mul(LL a, LL b, LL mod) {
  LL tmp = LL (a * (long double) b / mod);
  return ((a * b - tmp * mod) + mod) % mod;

}
int main() {
  while(1) {

    cin >> a >> b >> mod;
    cout << O1quick_mul(a, b, mod) << endl;
  }
  return 0;
}
