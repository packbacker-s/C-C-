#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
const double ep1 = (sqrt(5.0) - 1.0) / 2.0;
const double ep2 = (sqrt(5.0) + 1.0) / 2.0;
int main() {
  int a, b;
  while(cin >> a >> b) {
    if(a == 0 && b == 0) break;
  if(b > a) {
    int temp;
    temp = b;
    b = a;
    a = temp;
  }
    int id = b * ep1;
    int temp1 = ep2 * id, temp2 = temp1 + id;
    int temp3 = ep2 * (id + 1), temp4 = temp3 + id + 1;
    if(temp1 == b && temp2 == a) printf("0\n");
    else if(temp3 == b && temp4 == a) printf("0\n");
    else printf("1\n");
  }
  return 0;
}
