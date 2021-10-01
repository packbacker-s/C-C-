#include <cstdio>
#include <iostream>
using namespace std;

string add(string s1, string s2) {  //s1更长
    if(s1.length() < s2.length()) {
        string temp = s1;
        s1 = s2;
        s2 = temp;
    }
    for(int i = s1.length() - 1, j = s2.length() - 1; i >= 0; i--, j--) {
        s1[i] += j >= 0 ? s2[j] - '0' : 0;
        if(s1[i] - '0' >= 10) {  //进位
            s1[i] = (s1[i] - '0') % 10 + '0';
            if(i) s1[i - 1]++;  //是否需要补位
            else s1 = '1' + s1;
        }
    }
    return s1;
}

int main() {
    string a, b;
    while(cin >> a >> b){
        cout << add(a, b) << endl;
    }
    return 0;
}
