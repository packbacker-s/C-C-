#include <iostream>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
//void itoa(int n, char s[]);
int n;
void itoa(int n, char s[], char d[]) {
  int i, j, sign;
  if((sign = n) < 0)  //记录符号
  n = -n;   //使n成为正数
  i = 0;
  do {
    s[i++] = n % 10 + '0';//取下一个数字
  }
  while((n /= 10) > 0); //删除该数字
  if(sign < 0)
  s[i++] = '-';
  s[i] = '\n';
  for(j = i; j >= 0; j--) //生成的数字是逆序，所以...
  //printf("%c", s[j]);

}
   //数字转化为字符串

int main() {
  char s[100];
  char abc[100];
  cin >> n;
  itoa(n, s);
  printf("%s\n", abc);
  return 0;
}





/*
int main() {
  char a[100];
  char b[100];
  scanf("%s", a);
  scanf("%s", b);
  int s1 = atoi(a);
  int s2 = atoi(b);
  int sum = s1 + s2;
  cout << sum << endl;
  char x1[100], x2[100];


  x1 = itoa(s1);
  cout << x1 <<  endl;
  return 0;
}
*/
