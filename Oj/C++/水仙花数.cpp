#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  for(int i = 100; i < 1000; i++) {
    a = i / 100;
    b = i / 10 % 10;
    c = i % 10;
    int m;
    m = a*a*a + b*b*b + c*c*c;
    if(m == i)
    cout << i << endl;
  }


  return 0;
}
