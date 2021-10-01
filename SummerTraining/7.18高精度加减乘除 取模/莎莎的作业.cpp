#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main() {
  int k;
  long long n;
  while(cin >> n) {
    int cnt = 0;
     for(k = 1; k < 16; k ++) {
       if(k * log(k) <= log(n)) {
         cnt ++;
       }
     }
     cout << cnt << endl;
  }
    return 0;
}
