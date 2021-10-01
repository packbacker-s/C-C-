#include<stdio.h>
 int main(int argc, char const *argv[]) {
int a[20];
int i;
for(i=0;i<=19;i++)
  scanf("%c",&a[i]);
for(i=19;i>=0;i--)
  printf("%c",a[i]);
  return 0;
}
