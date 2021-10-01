#include <cstdio>
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int n, k;
#define MAX 100000
int check[MAX + 7];
struct node {
  int x, step;
};
int bfs() {
  node now, next;
  memset(check, 0, sizeof check);
  now.x = n;
  now.step = 0 
  queue <node> q;
  q.push(now);
  while(!q.empty()) {
    now = q.front();
    q.pop();
    if(now.x == k) {
      return now.step;
    }
    next.step = now.x + 1;
    next.x = now.x - 1;
    if(next.x > 0 && check[next.x == 0]) {
      q.push(next);
      check[next.x] = 1;
    }
    next.x = now.step +1;
    if(next.x > 0 && check[next.x] == 0) {
      q.push(next);
      check[next.x] = 1;
    }
    next.x = now.x * 2;
    next.step = now.x + 1;
    if(next.x <= 100000 && check[next.x] == 0) {
      q.push(next);
      check[next.x] = 1;
    }

  }
}
  int main() {
    while(~scanf("%d %d",&n, &k)) {
    if(n >= k)
    int step = n - k;
    step *= 10;
    cout << step / 60 << ":" << step % 60 <<endl;
  }else {
    int step = bfs();
    step *= 10;
    cout << step / 60 << ":" << step % 60 << endl;
  }
  }
