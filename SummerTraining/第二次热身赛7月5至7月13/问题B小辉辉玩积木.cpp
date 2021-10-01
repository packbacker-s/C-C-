#include "stdio.h"
int main(){
  int n;
  long long fn[80];
  fn[0] = fn[1] = 1;
  for(int i = 2;i < 52; i++){
    fn[i] = fn[i - 1] + fn[i - 2];

  }
  while(~scanf("%d", &n)){
    printf("%lld\n",fn[n]);
  }
  return 0;
}
