// #include<stdio.h>
// int main(){
//   long long fn[100];
//   int i;
//   fn[1]=fn[2]=1;
//   for(i=3;;i++){
//     fn[i]=fn[i-2]+fn[i-1];
//     if(fn[i]<0)
//     break;
//   }
//   printf("%lld\n",fn[i-1]);
//   return 0;
// }
#include<iostream>
using namespace std;
int main(){
  long long fn[100];
  int i;
  fn[1]=fn[2]=1;
  for(i = 3;; i++) {
    fn[i] = fn[i-2] + fn[i-1];
    if(fn[i] < 0)
    break;
  }
  cout << fn[i - 1] << endl;
  return 0;
}
