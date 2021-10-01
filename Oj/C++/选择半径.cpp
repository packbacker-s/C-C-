#include <iostream>
using namespace std;
int main() {
  int r;
  double ave;
  for(int i = 1; i <= 10; i++) {
    ave = 3.1415926 * i * i;
    if(ave >= 40 && ave <= 90) {
      printf("r=%d area=%.2lf\n", i, ave);
    }
  }
  return 0;
}
