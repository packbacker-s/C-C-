#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 3000005;
int a[maxn];
int n;   //人数
int t;   //卡片数字
int main() {
  memset(a, 0, sizeof a);   //数组a置0, 做标记
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> t;
    //sort();
    if(a[t] != 0)
      a[t]--;
    else
      a[t]++;
  }

  for(int i = 0; i < n; i++) {
    if(a[i] != 0) {
      cout << i << endl;
    }
  }
  return 0;
}
