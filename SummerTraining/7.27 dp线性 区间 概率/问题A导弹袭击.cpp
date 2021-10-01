#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n;
  while(~scanf("%d", &n)) {
    int a[n + 5];
    a[0] = 0;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int dp[n + 5];
    int cnt = 0;

    for(int  i = 0; i < n; i++) {
      dp[i] = 1;
    }
    for(int i = 1; i < n; i++) {
      for(int j = 0; j < i; j++) {
        if(a[i] > a[j]) {
          dp[i] = max(dp[i], dp[j] + 1);
        }
      }
    }
    //  cout << "aaa" << endl;

    for(int i = 0; i < n; i++) {
      cnt = max(cnt, dp[i]);
    }
    cout << cnt << endl;
  }
  return 0;
}



/*
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("test1.in", "r", stdin);
    //freopen("test1.out", "w", stdout);
    int T;
    while (~scanf("%d", &T))
    {

        int dp[T + 5];
        int data[T + 5];
        data[0] = 0;
        int num = 0;
        for (int i = 1; i <= T; i++)
        {
            cin >> data[i];
            dp[i] = 1;
        }
        for (int i = 2; i <= T; i++)
        {
            for (int j = i - 1; j >= 1; j--)
            {
                if (data[i] > data[j])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
                num = max(num, dp[i]);
            }
        }
        cout << num << endl;
    }
    return 0;
}
*/
