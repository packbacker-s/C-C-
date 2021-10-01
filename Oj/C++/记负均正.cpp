#include <stdio.h>
//using namespace std;
int main() {
  int a[25];
  for(int i = 1; i <= 20; i++) {
    scanf("%d", &a[i]);
  }
  int cnt = 0;
  double sum = 0, ave;
  for(int i = 1; i <= 20; i++) {
    if(a[i] < 0)
    cnt++;
    if(a[i] > 0) {
      sum += a[i];
    }
    ave = sum / (20 - cnt);
  }
  printf("%d\n", cnt);
  printf("%.2lf\n", ave);
  return 0;
}
