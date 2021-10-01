#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;
int main() {
  char a[100];
  int i, j;
  stack <char> s;
  gets(a);
  for(i = 0; a[i] != '\0'; i++) {
    s.push();
  }
  j = i;
  for(i = 0;i <= j - 1; i++) {
    if(a[i] != s.top())
    break;
    else
    s.pop();
  }
  if(i == j)
  printf("是回文\n");
  else
  printf("不是回文\n");
  return 0;
}
