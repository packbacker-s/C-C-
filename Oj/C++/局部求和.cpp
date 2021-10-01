#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int a[20];
  for(int i = 0; i < 20; i++) {
    cin >> a[i];
  }

//sort(a, a+20);

  for(int i = 0; i < 20; i++)
    for(int j = 0; j < 20; j++)
      if(i != j && a[i] % a[j] == 0){
        cout << a[i] << endl;
        break;
      }
  return 0;
}
