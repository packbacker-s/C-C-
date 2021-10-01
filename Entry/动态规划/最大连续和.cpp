#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, t;
  int A[1000];
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> A[i];
  }
  int tot = 0;
  int best = A[1];
//  i   1 2 3 4 5 6 7  8
  for(int i = 1; i <= n; i++) {      //n个数  2 3 4 6 8 9 10 1
    for(int j = i; j <= n; j++) {
      int sum = 0;
      for(int k = i; k <= j; k++) {                //  i= 1->sum =
        sum += A[k];
        tot ++;    //累加元素和
      }
      if(sum > best)
      best = sum;            //更新最大值
    }
  }
  cout << best << " " << tot << endl;
  return 0;
}
