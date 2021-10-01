#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 200 + 5;
struct tree {
    int r;
    int l;
    int num;
};
int num[maxn];
tree a[maxn];
inline void pushup(int k) {
    a[k].num = max(a[k << 1].num, a[k << 1 | 1].num);
}
void build(int now, int l, int r) {//建树
    a[now].l = l;
    a[now].r = r;
    if(l == r) {
      a[now].num = num[l];
    return;
}
    int mid = (l+r) >> 1;
    build(now << 1, l, mid);
    build(now << 1 | 1, mid + 1, r);
    pushup(now);
}
int query_poin(int k, int l, int r) {//查询函数，区间内的最大值
    int res = 0;
    if(l <= a[k].l && r >= a[k].r)
    return a[k].num;//刚好在区间内，输出数据
    int mid = (a[k].r + a[k].l) >> 1;
    if(l <= mid)
    res = max(res, query_poin(k << 1, l, r));
    if(r > mid)
    res = max(res, query_poin(k << 1 | 1, l, r));
    return res;
}
int main() {
    int n, m;
   while(~scanf("%d %d", &n, &m)) {
    for(int i = 1; i <= n; i++) {
        scanf("%d",&num[i]);
    }
    build(1, 1, n);
    while(m--) {
        int i, j;
        scanf("%d %d", &i, &j);
        printf("%d\n", query_poin(1, i, j));
    }
   }
    return 0;
}
