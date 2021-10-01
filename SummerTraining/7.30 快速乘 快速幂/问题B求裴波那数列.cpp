#include <cstdio>
#include <iostream>
using namespace std;
const int INF = 1000000009;
const int maxn = 2e5 + 5;
int f[maxn];
 int main() {
   f[0] = 0;
   f[1] = 1;
   int n;
   while(cin >> n && n) {
       f[n] = f[n - 2] + f[n - 1];
       cout << f[n] % INF << endl;
   }
   return 0;
 }
