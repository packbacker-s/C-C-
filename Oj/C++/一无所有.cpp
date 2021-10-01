#include <iostream>
using namespace std;
int main() {
  long long int n, a, b;
  //cin >> n;
  scanf("%lld", &n);
  while(n--) {
    //cin >> a >> b;
    scanf("%lld %lld", &a, &b);
    long long int cnt = 0;
    while(a) {
      if(b == 0)
      cnt == a;
      else if(a % b != 0) {
        cnt = cnt + a % b;
        a = a - a % b;
      }
      else if(a % b == 0) {
        a = a / b;
        cnt++;
      }
    }
    //cout << cnt << endl;
    printf("%lld\n", cnt);
  }
  return 0;
}
