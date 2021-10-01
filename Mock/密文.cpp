#include <iostream>
#include <cstring>
using namespace std;
int main() {
  string str;
  cin >> str;
  int len = str.length();
  for(int i = 0; i < len; i++) {
    str[i] = 97 + (int(str[i]) - 97 + 3) % 26;
  }
  cout << str << endl;
  return 0;
}
