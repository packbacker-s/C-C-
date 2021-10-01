#include <iostream>
#include <cstring>
#include <cstdio>
#define MAX 30000
using namespace std;
char a[30005],b[30005];
int x[MAX], y[MAX], z[5000000];
int main() {
  int l1,l2,k;
  int i,j;
  while(~scanf("%s %s",a,b)) {
    memset(z, 0, sizeof z);
    l1 = strlen(a);
    l2 = strlen(b);
    for(j = 0, i = l1 - 1; i >= 0; i--) {     //逆向存取
      x[j++] = a[i] - '0';
    }
    for(j = 0, i = l2 - 1; i >= 0; i--) {     //逆向存取
      y[j++] = b[i] - '0';
    }
    for(i = 0; i < l1; i++) {
      for(j = 0; j < l2; j++) {
        z[i + j] += x[i] * y[j];
      }
    }
    for(k = 0; k < l1 + l2 - 1; k++) {
      if(z[k] >= 10) {
        z[k + 1] += z[k] / 10;
        z[k] %= 10;
      }
    }
    // cout << k << endl;
    int max_the_lenth = 0;
    for(i = k; i > 0; i--) {
      if(z[i] == 0)
      continue;
      else {
        max_the_lenth = i;
      }
      break;
    }
    // cout << i << endl;
    for(i = max_the_lenth ; i >= 0; i--) {
      printf("%d", z[i]);
    }
    printf("\n");
  }
  return 0;
}
