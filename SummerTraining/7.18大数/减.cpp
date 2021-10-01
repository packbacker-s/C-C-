#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int flag = 0;
string sub(string s1, string s2){
    for(int i = s1.length() - 1, j = s2.length() - 1; j >= 0; i--, j--){
        if(s1[i] >= s2[j]){
            s1[i] = s1[i] - s2[j] + '0';
        }
        else{
            int k = i;
            s1[i] = s1[i] + 10 - s2[j] + '0';
            while(s1[k - 1] == '0'){  //借位
                s1[k - 1] = '9';
                k--;
            }
            s1[k-1]--;
        }
    }
    while(s1[0] == '0'){  //去掉前导0
        if(s1.length() == 1) break;
        s1.erase(0, 1);
    }
    return s1;
}

int main()
{
    string a, b;
    while(cin >> a >> b){
        flag = 0;
        if(a.length() < b.length()) flag = 1;
        else if(a.length() == b.length() && a < b) flag = 1;
        if(flag) cout << "-" << sub(b, a) << endl;
        else cout << sub(a, b) << endl;
    }
    return 0;
}
