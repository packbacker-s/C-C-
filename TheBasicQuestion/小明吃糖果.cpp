#include <stdio.h>
int fan(int n){
 if(n==1) return 1;
 else
 return 2 * fan(n - 1) + n;
}
int main(){
  int n;
  while (~scanf("%d", &n)) {
    printf("%d\n", fan(n));
  }
}
