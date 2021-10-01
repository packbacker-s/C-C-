#include<vector>
#include<iostream>
#include<cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
  int num[10005];
  int n;
  cin >> n;
  int temp;
  memset(num, 0, sizeof num);
  for (int i = 0; i < n; ++i) {
    cin >> temp;
    if (num[temp] == 0) {
      num[temp]++;
    }
  }
  for (int i = 0; i < 10000; ++i) {
    if (num[i]) {
      printf("%d ", i);

    }
  }
}
