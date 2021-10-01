#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 1e5 + 5;
typedef long long LL;
LL tree1[maxn], tree2[maxn], a[maxn];
int n, m;
int lowbit(int x) {
  return x & (-x);
}
void update(int i, LL x) {
  for(int j = i; j <= n; j += lowbit(j)) {
    tree1[j] += x;
    tree2[j] += x * (i - 1);
  }
}
LL getSum(int i) {
  LL res = 0;
  for(int j = i; j >= 1; j -= lowbit(j)) {
    res += i * tree1[j] - tree2[j];
  }
  return res;
}
int main() {
  cin >> n >> m;
  for(int i = 1; i <= n; i++) {
    scanf("%lld", &a[i]);
    update(i, a[i] - a[i - 1]);
  }
  char c;
  int x, y, k;
  while (m--) {
    if(c == 'C'){
      cin >> x >> y >> k;
      update(x, k);
      update(y + 1, -k);
    }else {
      cin >> x >> y;
      printf("%lld\n", getSum(y) - getSum(x - 1));
    }
  }
  return 0;
}
