#include <bits/stdc++.h>
using namespace std;
const int maxn = 10000 + 7;
int main() {
  while(1) {
    int n, i, j;
    int array[maxn];           //大叔的存储
    memset(array, 0, sizeof array);
    array[0] = 1;
    cin >> n ;
    for( i = 2; i <= n; i++) {
      int up = 0;                    //进位数值
      for( j = 0; j <= 10000; j++) {
        int s = array[j] * i + up;    //例 s = 1 * 2 * 3 = 6  /   s = 1 * 2 * 3 * 4 = 24
        array[j] = s % 10;          //取余
        up = s / 10;          //array[0] = 6 up = 0  /    array[0] = 24   up = 2, array[1] = 2
      }
    }

    for( j = 10000; j >= 0; j--)      //输出
    if( array[j] != 0) {
      for( ; j >= 0; j--)
      cout << array[j];


    }
    cout << endl;
  }
    return 0;
}
