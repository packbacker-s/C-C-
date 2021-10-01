#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
  int q,cnt;
  long long int n;
  cin >> q;
  while(q--) {
    scanf("%lld", &n);
    cnt = 0;
    while(n % 2 == 0 || n % 3 == 0 || n % 5 ==0) {
      if(n % 2 == 0) {
        n = n / 2;
        cnt ++;
      }
      if(n % 3 == 0) {
        n = n / 3;
        cnt += 2;
      }
      if(n % 5 == 0) {
        n = n / 5;
        cnt += 3;
      }
    }
        if(n == 1)
          printf("%d\n", cnt);
      else
        printf("-1\n");

  }
return 0;
}
