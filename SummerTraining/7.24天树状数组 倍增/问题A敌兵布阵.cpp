#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 5e5 + 5;
long long int tree[maxn], a[maxn];
int n, m;
int lowbit(int x) {        //下标的更新，取x二进制最右边的1和它右边所有的0
  return x & (-x);
}
void update(int x, int num) {        //更新操作  位置、值
  for(int i = x; i <= n; i += lowbit(i)) {
    tree[i] += num;
  }
}
int getSum(int x) {          //求和操作
  int res = 0;
  for(int i = x; i > 0; i -= lowbit(i)) {
    res += tree[i];
  }
  return res;
}
int main() {
  cin >> n;
  int ans = 0;
  while(n--) {
    cin >> m;
    memset(tree, 0, sizeof tree);
    int temp;
    for(int i = 0; i <= m; i++) {
      cin >> temp;
      update(i, temp);
    }
    cout << "Case" << ++ans << ':' << endl;
    string s;
    int x, y;
    while(cin >> s && s[0] != 'E') {
      if(s[0] == '0') {
        cin >> x >> y;
        cout << getSum(y) - getSum(x - 1) << endl;
      }else
      if(s[0] == 'A') {
        cin >> x >> y;
        update(x, -y);
      }
    }
  }

  return 0;
}
