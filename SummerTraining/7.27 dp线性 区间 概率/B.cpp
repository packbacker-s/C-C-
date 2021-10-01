

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

/*
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

string s1, s2, tmp;

int main()
{
    //freopen("test1.in", "r", stdin);
    //freopen("test1.out", "w", stdout);
    while (cin >> s1 >> s2)
    {
        if (s1.size() < s2.size())
        {
            tmp = s1;
            s1 = s2;
            s2 = tmp;
        }
        int dp[s1.size() + 10][s1.size() + 10];
        memset(dp, 0, sizeof dp);
        int Max = 0;
        for (int i = 0; i < s2.size(); i++)
        {
            int k = i + 1;
            for (int j = 0; j < s1.size(); j++)
            {
                int l = j + 1;
                if (s1[j] == s2[i])
                {
                    dp[k][l] = dp[k - 1][l - 1] + 1;
                }
                else
                    dp[k][l] = max(dp[k - 1][l], dp[k][l - 1]);
                Max = max(Max, dp[k][l]);
            }
        }
        cout << dp[s2.size()][s1.size()] << endl;
    }

    return 0;
}

*/
