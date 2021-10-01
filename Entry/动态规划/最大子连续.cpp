#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
const int maxn = 10010;
int dp[maxn], A[maxn];
int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> A[i];
  }
  dp[0] = A[0];
  for(int i = 1; i < n; i++) {
    dp[i] = max(A[i], dp[i - 1] + A[i]);
  }
  int k = 0;
  for(int i = 1; i < n; i++) {
    if(dp[i] > dp[k]) k = i;
  }
  cout << dp[k] << endl;
  return 0;
}

/*int main() {
  int i , j, a[10][10], *p, s = 0;
  for(i = 0; i < 10; i++) {
    p = a[i];
    for(j = 0; j <10; j++)
    p[j] = i +1;
  }
  for(j = 0, p = a[0]; j <10; j++, p +=10) {
    s+= p[j];
  }
  printf("%d\n", s);
}
*/
