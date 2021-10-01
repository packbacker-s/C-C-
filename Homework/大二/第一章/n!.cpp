/*#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
long long int fun(int n) {
  if(n <= 50 && n > 1) return n * fun(n - 1);
  if(n == 1) return
}
int main() {
    long long int a[80];
      a[1] = 1;
      for(int i = 50; i >= 1; i--) {
        a[i] = i * (i + 1);
      }
      printf("%lld\n", a[n]);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    double i,j=0,jc;
    for(i=50;i<=50;i++) {
      j=i;
      jc=1;
      do {
        jc=jc*j;
        j=j-1;
      }
      while(j>0);
      printf("%.0lf %.0lf\n",i,jc);
      printf("\n");
     }
    return 0;
}
*/
//#include <iostream>
#include <stdio.h>
#include <string.h>
//using namespace std;
const int maxn = 2e5 + 5;
int n, tot;
int ans[maxn];           //大数的存储
int main() {
  int s;
  while(~scanf("%d", &n)) {            //计算n！
    memset(ans, 0, sizeof ans);     //对ans数组初始化为0
    ans[0] = 1;                   //从1开始乘
    tot = 1;
    for(int i = 2; i <= n; i++) {
      int now = 0;
      int cnt = 0;        //进位数值
      while(now < tot) {
        s = ans[now] * i + cnt;
        ans[now++] = s % 10;           //取余
      //  now ++;
        cnt = s / 10;
        if(tot == now  && cnt)
        tot ++;
      }
    }
      for(int i = tot - 1; i >= 0; i --) {
        printf("%d", ans[i]);
      }
      printf("\n");
  }
  return 0;
}

/*
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 2e5 + 5;
int n, tot, ans[maxn];
int main() {
  int t;
  while(cin >> n) {
    memset(ans, 0, sizeof ans);
    ans[0] = 1;
    tot = 1;
    int cnt;
    int now;

    for(int i = 2; i <= n; i++) {
      now = 0;
      cnt = 0;
      while(now < tot) {
        t = ans[now] * i + cnt;
        ans[now] = t % 10;
        now ++;
        cnt = t / 10;
        if(tot == now  && cnt)
        tot ++;
      }
    }
      for(int i = tot - 1; i >= 0; i --) {
        cout << ans[i];
      }
      cout << endl;
  }
  return 0;
}
*/
