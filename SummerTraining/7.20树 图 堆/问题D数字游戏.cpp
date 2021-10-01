#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <algorithm>
using namespace std;
const int maxn = 1000000 + 5;
int a[maxn];
int n,m;
int main() {
  while(cin >> n >> m){
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a+n);
  for(int i = n - 1; i >= 0 && m; i--)
    if(m >= a[i])
    m -= a[i];
    if(!m)
    printf("YSE\n");
    else
    printf("NO\n");

}
  return 0;
}
