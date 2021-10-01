#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main() {
  long long int fn[100];
  fn[1] = fn[2] = 1;
  int i;
  for(i = 3; ; i++) {
    fn[i] = fn[i-2] + fn[i-1];
    if(fn[i] < 0)
     break;
  }
  printf("%lld\n", fn[i-1], i);
  return 0;
}
/*

#include<stdio.h>
int main(){
  long long fn[100];
  int i;
  fn[1]=fn[2]=1;
  for(i=3;;i++){
    fn[i]=fn[i-2]+fn[i-1];
    if(fn[i]<0)
    break;
  }

printf("%lld\n",fn[i-1]);

  return 0;
}
*/
