#include <stdio.h>
#include <string.h>
int main() {
  char str[1007];
  int length;
  int sum = 0;
while (gets(str) != NULL) {
  length = strlen(str);
  sum = 0;
  for(int i = 0; i < length; i++) {
    if (str[i] == ')')
    sum--;
    else if(str[i] == '(')
    sum++;
    if(sum < 0) {
      break;
    }
  }
    if(sum == 0)
   printf("Yes\n");
   else
   printf("No\n");
 }
return 0;
}
