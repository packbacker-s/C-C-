#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 2e5 + 5;
int isprime[maxn];    //保存素数
int vis[maxn];       //初始化
void eulerSieve() {
  int cnt = 0;
  memset(vis, 0, sizeof vis);     //0是素数  1是合数
  for(int i = 2; i < maxn; i++) {
    if(!vis[i])
    isprime[cnt ++] = i;
    for(int j = 0; j < cnt && i * isprime[j] < maxn; j++) {
      vis[i * isprime[j]] = 1;
      if(i % isprime[j] == 0) {
        break;
      }
    }
  }
}
 int main() {
   int n;
   eulerSieve();
   while(cin >> n && n) {
     if(!vis[n]) {
       cout << "Yes" << endl;
     }
    else
    cout << "No" << endl;
   }
   return 0;
}
