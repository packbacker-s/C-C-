#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
void cut (char *a) {
  int la = strlen(a) - 1;
  int i;
  for(i = la; i > 0; --i) {
    if(a[i] != '0') {
      break;
    }
  }
  if(a[i] == '.') {
    i--;
      }


}
char a[10007],b[10007];
int main() {
  char a[10007],b[10007];
  while(cin >> a >> b) {
    int la = strlen(a);
    int lb = strlen(b);
  for(int i = 0; i < la; i++) {
    cut(a);
    break;
  }
  }
  for(int i = 0; i < lb; ++i) {
    if(b[i] == '.') {
      cut(b);
      break;
    }
  }
  int a_front = 0; b_front = 0;

  return 0;
}
