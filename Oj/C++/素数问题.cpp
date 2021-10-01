#include <iostream>
using namespace std;
typedef long long ll;
ll n, x, y;
int main() {
  scanf("%lld", &n);
  while(n--) {
    scanf("%lld %lld", &x, &y);
    if((x - y) != 1)
    printf("Yes\n");
    else
    printf("No\n");
  }
  return 0;
}
