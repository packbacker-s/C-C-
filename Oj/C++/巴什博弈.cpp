#include <iostream>
using namespace std;
int main() {
  int a;
  cin >> a;
  while(a--) {
    int n, m;
    cin >> n >> m;
    if(n % (m + 1) == 0) 
      printf("second\n");
      else
      printf("first\n");

  }
  return 0;
}
