#include <iostream>
#include <stack>
using namespace std;
typedef long long ll;
int n;
ll x = 0, m, cnt;
char c;
stack <int> a;
int main() {
  cin >> n;
  while(n--) {
    cin >> c;
    if(c == 'f') {
      cin >> m;
      if(a.empty()) {
        a.push(m);
        //printf("m = %lld\n", m);
      }
      else {
        cnt = a.top() * m;
        a.push(cnt);
        //printf("cnt = %lld\n", cnt);
      }
    }
    if(c == 'e' && !a.empty()) {
      a.pop();
      //printf("x = %d\n", x);
    }
    if(c == '+') {
      if(!a.empty())
      x = x + a.top();
      else
      x++;
      //printf("CX = %lld\n", x);
    }
  }
  if(x >= 10000000)
  printf("Go Out!!!\n");
  else
  printf("%lld\n", x);
  return 0;
}
