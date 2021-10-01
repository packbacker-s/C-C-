#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main() {
  ll n, a;
  while(~scanf("%lld", &n)) {
    for(int i = 2; i <= sqrt(n); i++) {
      if(n % i == 0) {
        a = n / i;
        printf("%lld\n", a);
      }

    }
  }
  return 0;
}
