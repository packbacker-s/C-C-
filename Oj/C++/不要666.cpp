#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

char *reverse(char *s) {
  char temp;
  char *p = s;
  char *q = s;
  while(*q)
    ++q;
  q--;
  while(q >p) {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
  }
  return s;
}


char *my_itoa(int n) {
  int i = 0, isNegative = 0;
  static char s[100];
  if((isNegative = n) < 0) {
    n = -n;
  }
  do {
    s[i++] = n % 10 + '0';
    n = n / 10;
  }
  while(n > 0);
  if(isNegative < 0) {
    s[i++] = '-';
  }
  s[i] = '\n';
  return reverse(s);
}
int main() {
  int m;
  char a[100];
  char b[100];
  char *c;
  while(~scanf("%s %s", a, b)) {
    int S, T;
    S = atoi(a);
    T = atoi(b);
    int n;
    n = T - S + 1;

    for(m = S; m <= T; m++) {

      for(int j = 0; j < 10; j++) {
        //itoa(m, c, 10);
        c = my_itoa(m);
        if(c[j] == '6' && c[j+1] == '6' && c[j+2] == '6')
        n--;
      }

    }

    printf("%d\n", n);
  }
  return 0;
}
