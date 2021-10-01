#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <string>
using namespace std;
string shengmu[23] = {"b", "p", "m", "f", "d", "t", "n", "l", "g", "k", "h", "j", "q", "x",
                      "zh", "ch", "sh", "r", "z", "c", "s", "y", "w"};
string yunmu[23] = {"a", "o", "e", "i", "u", "v", "ai", "ei", "ui", "ao", "ou", "iu", "ie", "er", "an", "en", "in", "un", "ang", "eng", "ing", "ong"};
vector<string> zhongwen;
char riyu[20][10] = {"ts", "ki", "ma", "ha", "ni", "ta", "ka", "ra", "ku", "mo", "no", "su", "tsu", "wa", "ko", "ji", "aru", "shi", "te", "au"};
string yingyu[20] = {"the", "was", "is", "are", "am", "were", "they", "that", "for", "to", "and", "or", "than", "a", "of", "those", "these", "this", "from", "time"};
int main() {
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      zhongwen.push_back(shengmu[i] + yunmu[j]);
    }
  }

  int cnt = 0, English = 0, Chinese = 0, Japanese = 0;
  string str;
  while (cin >> str) {
    int len = str.length();
    for (int i = 0; i < len; i++) {
      if (str[i] >= 'A' && str[i] <= 'Z') {
        str[i] = str[i] - 'A' + 'a';
      }
    }

    for (int i = 0; i < 20; i++) {
      if (yingyu[i] == str) {
        English++;
        break;
      }
    }

    int len_c = zhongwen.size();
    for(int i = 0; i < len_c; i++) {
      if (str == zhongwen[i]) {
        Chinese++;
        break;
      }
    }



    for(int i = 0; i < 20; i++) {
      if (strstr(str.c_str(), riyu[i]) != NULL) {
        Japanese++;
        break;
      }
    }
  }

  if (English > 10) {
    cout << "English" << endl;
  } else if (Chinese >= Japanese && Chinese >= English) {
    cout << "Mandarin" << endl;
  } else {
    cout << "Japanese" << endl;
  }



  return 0;
}
