#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
string s1, s2, tmp;
int main() {
  while(cin >> s1 >> s2) {
    if(s1.size() < s2.size()) {
      tmp = s1;
      s1 = s2;
      s2 = tmp;
    }
    int dp[s1.size() + 5][s1.size() + 5];     //构造足够大的数组
    memset(dp, 0, sizeof dp);                 //
    int Max = 0;
    for(int i = 0; i < s2.size(); i++) {        //一下为核心代码
      int k = i + 1;
      for(int  j = 0; j < s1.size(); j++) {
        int l = j + 1;
        if(s1[j] == s2[i]) {                    //比较
          dp[k][l] = dp[k - 1][l - 1] + 1;
        }
        else
        dp[k][l] = max(dp[k - 1][l], dp[k][l - 1]);
        Max = max(Max, dp[k][l]);
      }
    }
    cout << dp[s2.size()][s1.size()];
  }
  return 0;
}
