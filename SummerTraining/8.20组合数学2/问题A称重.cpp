#include <iostream>
#include <cstdio>
#include <cmath>
//#define maxn 100 + 5
using namespace std;
//typedef long long LL;
int main() {
  int n;
  while(cin >> n) {
    int a = (n + 1) * n / 2;
    cout << a << " " << pow(2, n) - 1 << endl;
  }
  return 0;
}
