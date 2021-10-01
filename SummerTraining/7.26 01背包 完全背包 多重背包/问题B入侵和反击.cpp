#include <cstdio>
#include <iostream>
using namespace std;
const int maxn = 20000 + 5;
int a[maxn];
int main() {
  int T, n;
  cin >> T;
  while(T--) {
    cin >> n;
    int dp[n + 5];
    int num[n + 5];
    for(int i = 0; i < n; i++) {
      cin >> num[i];
    }
    //memset(dp, 1, sizeof dp);
    dp[0] = 1;
    for(int i = 1; i < n; i++) {   //dp全赋值1
      dp[i] = 1;
      for(int j = 0; j < i; j++) {
        if(num[i] <= num[j]) {
          dp[i] = max(dp[i], dp[j] + 1);
        }
      }
    }
    int Max = -1;
    for(int i = 0; i < n; i++) {
      Max = max(Max, dp[i]);
    }
    cout << n - Max << endl;
  }
  return 0;
}
