#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
const int maxn = 100 + 6;
int a[maxn];
int b, e;
int k;
int main() {
  int m;
  cin >> m;
  while(m--) {
    int cnt = 0;
    cin >> b >> e;
    for(int i = b; i <= e; i++) {
      int num, c;
      while(!num) {
        c = (num % 2);
        a[k] = c;
        num = num / 2;
        k++;
        //  for(i--; i >= 0; i--) {
          //    cout << a[i];
          //    cout << endl;
          //    }
          for(int i = 0; i < k; i++) {
            if(a[i] == 1) cnt++;
            cout << cnt << endl;
          }
      }
    }
  }
  return 0;
}
