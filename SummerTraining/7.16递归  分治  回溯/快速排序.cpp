#include <bits/stdc++.h>
using namespace std;
//const int maxn = 100 + 5;
//int a[maxn]; n;
/*void quicksort(int l, int r) {
  int t, temp;
  if(l > r) return;
  temp = a[l];   // temp是基准数
  while(l != r) {
    while(l < r && a[r] >= temp) l--;
    while(l < r && a[l] <= temp) r++;
    if(r < l) {
      t = a[r];
      a[r] = a[l];
      a[l] = t;
    }
  }
  a[l]
}
*/
void quicksort(int a[], int low, int hight) {
  if(low >= hight) return;
  int l = low;
  int r = hight;
  int key = a[l];
  while(l != r) {
    while(l != r && a[r] >= key) r--;
    a[l] = a[r];
    while(l != r && a[l] <= key) l++;
    a[r] = a[l];
    a[l] = key;
  }
  quicksort(a, low, l - 1);
  quicksort(a, l + 1, hight);
}
