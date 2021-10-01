#include <cstdio>
#include <iostream>
#include <bitset>
using namespace std;
int lowbit(int x) {
  bitset<8> b1(x);
  bitset<8> b2(-x);
  cout << b1 << endl;
  cout << b2 << endl;
  int a = x & (-x) ;
  cout << a << endl;
}
int main() {
  int x;
  while (cin >> x && x) {
    lowbit(x);
  }
  return 0;
}
