#include <iostream>
using namespace std;

const int N = 7;
int Value[N] = {1, 2, 5, 10, 20, 50, 100};      //钱币的价值
int Count[N] = {3, 0, 2, 1, 0, 3, 5};        //对应钱币价值的张数
int solve(int money) {
  int sum = 0;                     //最少需要花多少张钱币数
  for(int i = N - 1; i >= 0; i--) {
    int a = min(money/Value[i], Count[i]);  //判断当前面值钱币数够不够消费
    money = money - a * Value[i];
    sum += a;
  }
  if(money > 0)
    sum = -1;
    return sum;
}
int main() {
  int money;
  cin >> money;
  int res = solve(money);
  if(res != -1)
  cout << res << endl;
  else
  cout << "NO" << endl;
  return 0;
}
