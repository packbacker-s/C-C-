#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
const int maxn = 500007;
string s1, s2;
int ans[maxn];
void mul(string a, string b){
    for(int i = b.length() - 1; i >= 0; i--){
        for(int j = a.length() - 1; j >= 0; j--){
            ans[b.length() - 1 - i + a.length() - 1 - j] += (b[i] - '0') * (a[j] - '0');
        }
    }
    for(int i = 0; i < a.length() + b.length() - 1; i++){
        if(ans[i] >= 10){
            ans[i + 1] += ans[i] / 10;
            ans[i] %= 10;
        }
    }
    return;
}

int main()
{
    while(cin >> s1 >> s2){
        if(s1 == "0" || s2 == "0"){
            cout << "0" << endl;
            continue;
        }
        memset(ans, 0, sizeof(ans));
        if(s1.length() < s2.length()){
            string tmp = s1;
            s1 = s2;
            s2 = tmp;
        }
        mul(s1, s2);
        int flag = 0;
        for(int i = s1.length() + s2.length() - 1; i >= 0; i--){
            if(ans[i] == 0 && flag == 0){
                continue;
            }
            else{
                flag = 1;
                cout << ans[i];
            }
        }
        cout << endl;
    }
    return 0;
}
