#include <iostream>
using namespace std;
int main() {


  for(int i = 1; i < 1000; i++) {
    int sum = 0;


    for(int j = 1; j < i; j++) {
      if(i % j == 0)
         sum = sum + j;
    }



    if(sum == i || i == 1) {
      printf("%d=1", i);
      for(int k = 2; k < i; k++) {
        if(i % k == 0)
        printf("+%d", k);
      }
      printf("\n");
    }


  }
  return 0;
}
