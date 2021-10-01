#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 5000 + 5;
int pre[100005];
int find(int root) {        //查找根节点
  int son, temp;
  son = root;
  while(pre[root] != 0)    //我的上级不是掌门
    root = pre[root];
    while(son != root) {          //找他的上级直至掌门出现
      temp = pre[son];
      pre[son] = root;
      son = temp;
    }
    return root;     //掌门加到
}
void Union(int root1, int root2) {
  int x, y;
  x = find(root1);
  y = find(root2);
  if(x != y)
  pre[x] = y;
}
int main() {
  int n, m, p;
  int a, b;
  int m1, m2;
  int p1, p2;
  cin >> n >> m >> p;
  for(int i = 0; i < m; i++) {
        cin >> m1 >> m2;
        Union(m1, m2);
      //  cout << m1 << " " <<m2 << endl;
  }
  for(int i = 0; i < p; i++) {
    cin >> a >> b;
      //  cout << a << " " << b << endl;
  if(find(a) == find(b)) {
    cout << "Yes" << endl;
  }else
  cout << "No" << endl;
}
  return 0;
}
