/*
#include <iostream>
using namespace std;
int main() {
  int N, M, a, b;
  int flag = 0, cnt = 0;
  cin >> N >> M;



  for(a = N; a <= M; a++) {
    for(b = 2; b < a; b++) {
      if(a % b == 0)
      break;
      else
      if(b == a - 1)
        flag = 1;
        cnt++;
    }

  }
  if(flag == 1) {
    cout << cnt << endl;
    flag = 0;
  }
  return 0;
}
*/
#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int cnt = 0;
  for(int i = n; i <= m; i++) {
    int flag = 0;
    for(int j = 2; j < i; j++) {
      if(i % j == 0) {
        flag = 1;
      }
    }
    if(flag == 0) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
