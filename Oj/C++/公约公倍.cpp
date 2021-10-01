#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  cin >> a >> b;
  int k = a * b;
  int m;    //最小公倍数
  if(a < b) {
    c = b;
    b = a;
    a = c;
  }
  int t;   //余数
  t = a % b;
  while(t) {
    a = b;
    b = t;
    t = a % b;
  }
  m = k / b;
  cout << b << endl << m << endl;
  return 0;
}
