#include <iostream>
#include <cstdio>
using namespace std;
/*int fun(int x) {
  if(x == 1)
  return 1;
  else
  return x * fun(x - 1);
}
*/
int main(){
  double sum = 0, temp = 1;
  for(int i = 1; i <= 30; i++) {
    for(int j = 1; j <= i; j++) {
      temp *= j;
    }
      sum += temp;
      temp = 1;
  }
  printf("%.2e\n", sum);

  return 0;
}
