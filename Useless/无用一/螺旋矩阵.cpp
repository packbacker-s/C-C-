#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 1005;
int a[maxn][maxn];
int main() {
  int n, m, r, c;
  cin >> n >> m >> r >> c;
  //while(cin >> n >> m >> r >> c) {
    int col = 0, row = 0;
    int cnt = 1;
    memset(a, 0, sizeof a);
    int sum = n*m;
    a[row][col] = 1;
    while(cnt < sum) {
      while(col + 1 < m && !a[row][col + 1]) {
        a[row][++col] = ++cnt;
      }
      while(row + 1 < n && !a[row + 1][col]) {
        a[++row][col] = ++cnt;
      }
      while(col - 1 >= 0 && !a[row][col - 1]) {
        a[row][--col] = ++cnt;
      }
      while(row - 1 >= 0 && !a[row - 1][col]) {
        a[--row][col] = ++cnt;
      }
    }
    cout << a[r-1][c-1] << endl;
  //}
  return 0;
}
