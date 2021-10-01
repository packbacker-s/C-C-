#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 1005;
int a[maxn][maxn];
int main() {
  int n, m;
  int r, c;
  cin >> n >> m;
  cin >> r >> c;
  memset(a, 0, sizeof a);
  int zongshu = n * m;
  int cnt = 1;  //shuru zhi ++cnt
  int hang = 0, lie = 0;
  a[hang][lie] = 1;
  while(cnt < zongshu) {  //juzhen  fuzhi
    while(lie + 1 < m && !a[hang][lie + 1]) {
      a[hang][++lie] = ++ cnt;
    }
    while(hang + 1 < n && !a[hang + 1][lie]) {
      a[++hang][lie] = ++cnt;
    }
    while(lie - 1 >= 0 && !a[hang][lie - 1]) {
      a[hang][--lie] = ++cnt;
    }
    while(hang - 1 >= 0 && !a[hang - 1][lie]) {
      a[--hang][lie] = cnt++;
    }

  }
  cout << a[r-1][c-1] << endl;
  return 0;
}
