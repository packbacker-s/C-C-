#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 5e5 + 5;
int tree[maxn], a[maxn];
int n, m;
int lowbit(int i) {        //下标的更新，取x二进制最右边的1和它右边所有的0
  return i & (-i);
}
void update(int i, int x) {        //更新操作  位置、值
  for(int j = i; j <= n; j += lowbit(j)) {
    tree[j] += x;
  }
}
int getSum(int i) {          //求和操作
  int res = 0;
  for(int j = i; j >= 1; j -= lowbit(j)) {
    res += tree[j];
  }
  return res;
}
int main() {
  int T;
  int cnt = 0;
  cin >> T;
  while(T--) {
    memset(tree, 0, sizeof tree);
    cin >> n;
    int temp;
    for(int i =1; i <= n; i++) {
      cin >> temp;
      update(i, temp);
    }
    cout << "Case " << ++cnt <<":" << endl;
    string s;
    int x, y;
    while (cin >> s) {
      if(s[0] == 'Q') {
        cin >> x >> y;
        cout << getSum(y) - getSum(x - 1) << endl;
      }else if(s[0] == 'S') {
        cin >> x >> y;
        update(x, -y);
      }else if(s[0] == 'A') {
        cin >> x >> y;
        update (x, y);
      } else
      break;
    }
  }

  return 0;
}
