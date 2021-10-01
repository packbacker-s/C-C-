/*#include <stdio.h>
#include <stack>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
const int maxn = 1005;
int a[maxn];   //n个整数的存储
int main() {
  memset(a, 0, sizeof a);
  int n;
  int temp;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

	return 0;
}
*/

#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[400];
int ans;
void dfs(int b[], int m) {  //m长度
  if(m < ans) {
    ans = m;
  }
  for(int j = 0; j < m - 1; j++) {


    if(b[j] == b[j+1]) {
      b[j] = b[j] + 1;
      int aa = b[j];
      for(int k = j + 1; k < m - 1; k++)
        b[k] = b[k+1];
      dfs(b, m - 1);
      b[j] = aa - 1;
      for(int k = m - 1; k > j + 1; k--)
        b[k] = b[k - 1];
      b[j+1] = b[j];
    }


  }
}


int main() {
  cin >> n;  //长度

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }


  ans = n;
  dfs(a, n);
  cout << ans << endl;


  return 0;
}
