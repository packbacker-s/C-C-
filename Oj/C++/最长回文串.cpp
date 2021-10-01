#include <iostream>
#include <string>
using namespace std;
int  fun(string s) {
  int a = 0;
  int maxlen = 1;       //回文长度
  int len = s.size();
  for(int i = 0; i < len; i++){   //起始地址
    for(int j = i+1; j < len; j++) {  //结束地址
      int t1 = i, t2 = j;
      while(t1 < t2 && s.at(t1) == s.at(t2)) {  //判断是不是回文
        t1++;
        t2--;
      }
      if(t1 >= t2 && j-i+1 > maxlen) {
        maxlen = j-i+1;
      }
    }
  }
  return maxlen;
}
int main() {
  string s;
  while(cin >> s) {
    int Long = fun(s);
    cout << Long << endl;
  }
  return 0;
}
