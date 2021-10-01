#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;
const int maxn = 7;
int Count[maxn] = {1, 4, 3, 0, 4, 0, 3};
int Value[maxn] = {1, 2, 5, 10, 20, 50, 100};
int solve(int money) {
  int sum = 0;
  for(int i = maxn - 1; i >= 0; i--) {
    int a = min(money/Value[i], Count[i]);
    money = money - a * Value[i];
    sum += a;
  }
  if(money > 0)
  sum = -1;
  return sum;
}
int main() {
  int money;
  while(cin >> money) {
    int res = solve(money);
    if(res != -1)
    cout << res << endl;
    else
    cout << "NO" << endl;
  }
  return 0;
}
