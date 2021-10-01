#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 100000 + 5;
int w[maxn] = {0};
int wt[maxn] = {0};
int main(void) {
    int t;
    int n, s;
    cin >> t;
    while(t--) {
        cin >> n >> s;
        int dp[n + 5][s + 5];
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= n; i++) {
            scanf("%d", &w[i]);
        }
        for(int i = 1; i <= n; i++){
            scanf("%d", &wt[i]);
        }
        for(int i = 1; i <= n; i++) {
          for(int j = 1; j <= s; j++) {
                dp[i][j] = dp[i - 1][j];
                if(wt[i] <= j) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - wt[i]] + w[i]);
                }
            }
        }
        int maxi = -1;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= s; j++)
            maxi = max(maxi, dp[i][j]);
        }
        cout << maxi << endl;
    }
    return 0;
}
