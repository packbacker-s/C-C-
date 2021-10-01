#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 100 + 8;
  //结构体
struct node {
  int d;
  int l;
  int r;
}q[maxn];
int n, a;
int ans = 0;
void inorder(int k) {
  if(q[k].l)
  inorder(q[k].l);
  ans++;
  if(q[k].d == a) {
    cout << ans << endl;
    exit(0);
  }
  if(q[k].r) {
    inorder(q[k].r);
  }
}
int main() {
  cin >> n >> a;
  for(int i = 1; i <= n; i++)
    cin >> q[i].d >> q[i].l >> q[i].r;
    inorder(1);
  return 0;
}
