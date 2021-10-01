#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;
int main() {
  int n;
  cin >> n;
  string str;
  while(n--) {
    ll sum = 0;
    int a[1000];
    int b[1000];
    cin >> str;
    int len = str.length();
    for(int i = 0, k = 0; i < len; i+1, k++) {
      if(str[i] == 'C')
      a[k] = 12;
      else if(str[i] == 'H')
      a[k] = 1;
      else if(str[i] == 'O')
      a[k] = 16;
      else
      a[k] = 14;
    }
    for(int j = 1, l = 0; j < len; j+1, l++) {
      b[l] = int(str[j]);
    }
    for(int i = 0; i < (len+1)/2; i++) {
      sum = sum + a[i] * b[i];
    }
    cout << sum << " ";
  }
  return 0;
}
