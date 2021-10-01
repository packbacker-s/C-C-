#include <iostream>
using namespace std;
typedef long long ll;
const int maxn = 100005;
ll fn[maxn];
int main() {
  int i;
  fn[1] = 1;
  fn[2] = 1;
  for(i = 3; i < 100; i++) {
    fn[i] = fn[i - 1] + fn[i - 2];
    if(fn[i] < 0) {
      break;
    }
  }
  cout << i - 1 << endl;        
  printf("%lld\n", fn[i - 1]);
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
